/**
@file obter_dados_estado.c
Funçoes que obtem informação do estado.
*/
#include "obter_dados_estado.h"
CASA obter_casa(ESTADO e, int linha, int coluna)
{
    return e.tab[linha][coluna];
}

int obter_jogada_jogador_coluna(ESTADO e, int num_jogada,int jogador)
{
    if (jogador ==1)
        return e.jogadas[num_jogada].jogador1.coluna;

    else
        return e.jogadas[num_jogada].jogador2.coluna;

}
int obter_jogada_jogador_linha(ESTADO e, int num_jogada,int jogador)
{
    if (jogador ==1)
        return e.jogadas[num_jogada].jogador1.linha;

    else
        return e.jogadas[num_jogada].jogador2.linha;

}

int obter_jogador_atual (ESTADO e)
{
    return e.jogador_atual;
}
int obter_num_jogadas (ESTADO e)
{
    return e.num_jogadas;
}
int obter_ultima_jogada_coluna(ESTADO e)
{
    return e.ultima_jogada.coluna;
}
int obter_ultima_jogada_linha(ESTADO e)
{
    return e.ultima_jogada.linha;
}
