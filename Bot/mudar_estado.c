
#include "obter_dados_estado.h"


void muda_casa(ESTADO *e, COORDENADA coord)
{
    e->tab[coord.linha][coord.coluna] = BRANCA;
    e->tab[e->ultima_jogada.linha][e->ultima_jogada.coluna] = PRETA;
}

void muda_jogadas(ESTADO *e, COORDENADA coord)
{

    if (e->jogador_atual == 1)
    {
        e->jogadas[e->num_jogadas].jogador1.coluna = coord.coluna;
        e->jogadas[e->num_jogadas].jogador1.linha = coord.linha;
    }

    else
    {
        e->jogadas[e->num_jogadas].jogador2.coluna = coord.coluna;
        e->jogadas[e->num_jogadas].jogador2.linha = coord.linha;

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

void muda_ultima_jogada (ESTADO *e, COORDENADA coord)
{
    e->ultima_jogada.linha = coord.linha;
    e->ultima_jogada.coluna= coord.coluna;
}

void reiniciar_estado (ESTADO *e)
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


void retoma_casa(ESTADO *e, int linha, int coluna, char carater)
{
    CASA casa;
    casa = (carater == '.' || carater == '1' || carater == '2') ? VAZIO : (carater == '*') ? BRANCA : PRETA;
    e->tab[linha][coluna] = casa;
}

