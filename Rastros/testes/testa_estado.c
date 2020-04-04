//
// Created by tiago on 23/03/20.
//


#include "testa_estado.h"
#include <assert.h>
#include "../dados/obter_dados.h"



void testa_estado (ESTADO e)
{
    int i,j;
    for (i=0;i<8;i++)
        for(j=0;j<8;j++)
            assert(obter_casa(e,i,j) == VAZIO || obter_casa(e,i,j) == PRETA || obter_casa(e,i,j) == BRANCA);

    for(i=0;i<32;i++)
    {
        assert (obter_jogada_jogador_linha(e,i,1)>=0 && obter_jogada_jogador_linha(e,i,1) <=7);
        assert (obter_jogada_jogador_linha(e,i,2)>=0 && obter_jogada_jogador_linha(e,i,2) <=7);
        assert (obter_jogada_jogador_coluna(e,i,1)>=0 && obter_jogada_jogador_coluna(e,i,1) <=7);
        assert (obter_jogada_jogador_coluna(e,i,2)>=0 && obter_jogada_jogador_coluna(e,i,2) <=7);
    }

    assert(obter_jogador_atual(e) >=1 && obter_jogador_atual(e) <=2);

    assert(obter_num_jogadas(e)>=0 && obter_num_jogadas(e)<=32);

    assert (obter_ultima_jogada_linha(e)>=0 && obter_ultima_jogada_linha(e)<=7);
    assert (obter_ultima_jogada_coluna(e)>=0 && obter_ultima_jogada_coluna(e)<=7);

}
