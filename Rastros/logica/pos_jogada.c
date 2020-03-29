//
// Created by tiago on 29/03/20.
//

#include "pos_jogada.h"
#include "../dados/obter_dados.h"
#include "../dados/retoma_estado.h"
#include "jogar.h"

int pos_jogada (ESTADO *e, int num)
{
    JOGADA JOGADAS_aux[num+1];
    COORDENADA coord;
    int i;
    for (i=0; i<num+1; i++)
    {
        JOGADAS_aux->jogador1.coluna = 0;
        JOGADAS_aux->jogador1.linha = 0;
        JOGADAS_aux->jogador2.coluna = 0;
        JOGADAS_aux->jogador2.linha = 0;
    }
    for (i=0; i<num; i++)
    {
        JOGADAS_aux[i].jogador1.coluna = obter_jogada_jogador_coluna(*e,i, 1);
        JOGADAS_aux[i].jogador1.linha = obter_jogada_jogador_linha(*e,i, 1);
        JOGADAS_aux[i].jogador2.coluna = obter_jogada_jogador_coluna(*e,i, 2);
        JOGADAS_aux[i].jogador2.linha = obter_jogada_jogador_linha(*e,i, 2);
    }
    reinicia_estado(e);
    for (i=0;i<num; i++)
    {
        coord = JOGADAS_aux[i].jogador1;
        jogar(e, coord);
        coord = JOGADAS_aux[i].jogador2;
        jogar(e, coord);
    }
    return 1;
}