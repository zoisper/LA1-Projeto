//
// Created by tiago on 19/03/20.
//

#include "retoma_estado.h"
#include "muda_dados.h"
#include "obter_dados.h"
# include <stdio.h>

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
