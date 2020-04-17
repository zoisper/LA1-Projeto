
#include <stdio.h>
#include "muda_estado.h"
#include "obter_dados_estado.h"


void muda_casa(ESTADO *e, COORDENADA c)
{
    e->tab[c.linha][c.coluna] = BRANCA;
    e->tab[e->ultima_jogada.linha][e->ultima_jogada.coluna] = PRETA;
}

void muda_jogadas(ESTADO *e, COORDENADA c)
{


    if (e->jogador_atual == 1)
    {
        e->jogadas[e->num_jogadas].jogador1.coluna = c.coluna;
        e->jogadas[e->num_jogadas].jogador1.linha = c.linha;
    }

    else
    {
        e->jogadas[e->num_jogadas].jogador2.coluna = c.coluna;
        e->jogadas[e->num_jogadas].jogador2.linha = c.linha;

    }
}

void incrementa_num_jogadas (ESTADO *e)
{
    e->num_jogadas++;
}

void muda_jogador_atual (ESTADO *e)
{
    e->jogador_atual = (e->jogador_atual == 1)? 2 : 1;
}

void muda_ultima_jogada (ESTADO *e, COORDENADA c)
{
    e->ultima_jogada.linha = c.linha;
    e->ultima_jogada.coluna= c.coluna;
}

void reinicia_estado (ESTADO *e)
{
    int i, j;
    for (i = 0; i < 8; i++)
        for (j = 0; j < 8; j++)
            e->tab[i][j] = VAZIO;
    e->tab[3][4] = BRANCA;
    e->jogador_atual = 1;
    e->num_jogadas = 0;
    e->ultima_jogada.coluna = 4;
    e->ultima_jogada.linha = 3;
    for (i = 0; i < 32; i++) {
        e->jogadas[i].jogador1.coluna = 0;
        e->jogadas[i].jogador1.linha = 0;
        e->jogadas[i].jogador2.coluna = 0;
        e->jogadas[i].jogador2.linha = 0;
    }
}

void retoma_tabuleiro (ESTADO *e, FILE *fp)
{
    int i,j;
    char carater;
    for (i = 0; i < 8; i++)
        for (j = 0; j < 8; j++)
        {
            carater = fgetc(fp);
            retoma_casa(e, i, j, carater);
            if (carater == '\n')
                j--;
        }
}

void retoma_movimentos(ESTADO *e, FILE *fp)
{
    char carater;
    while ((carater = fgetc(fp)) != EOF)
    {
        if (carater >= 'a' && carater <= 'h' && e->jogador_atual == 1)
        {
            e->jogadas[obter_num_jogadas(*e)].jogador1.coluna = carater - 'a';
            e->ultima_jogada.coluna = carater - 'a';
            carater = fgetc(fp);
            e->jogadas[obter_num_jogadas(*e)].jogador1.linha = '8' - carater;
            e->ultima_jogada.linha = '8' - carater;
            e->jogador_atual = 2;
        }

        if (carater >= 'a' && carater <= 'h' && e->jogador_atual == 2)
        {
            e->jogadas[obter_num_jogadas(*e)].jogador2.coluna = carater - 'a';
            e->ultima_jogada.coluna = carater - 'a';
            carater = fgetc(fp);
            e->jogadas[obter_num_jogadas(*e)].jogador2.linha = '8' - carater;
            e->ultima_jogada.linha = '8' - carater;
            e->num_jogadas++;
            e->jogador_atual = 1;
        }
    }
}


void retoma_casa(ESTADO *e, int linha, int coluna, char carater)
{
    CASA casa;
    casa = (carater == '.' || carater == '1' || carater == '2') ? VAZIO : (carater == '*') ? BRANCA : PRETA;
    e->tab[linha][coluna] = casa;
}

