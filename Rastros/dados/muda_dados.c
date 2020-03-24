//
// Created by tiago on 08/03/20.
//

#include "muda_dados.h"
#include <stdlib.h>

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

