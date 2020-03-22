//
// Created by tiago on 19/03/20.
//

#include "verifica_vencedor.h"
#include "../interface/mostra_tabuleiro.h"
#include "../dados/obter_dados.h"
#include <stdlib.h>
#include <stdio.h>

int verifica_vencedor (ESTADO e) // verifica se alguem ganhou
{
    int c = obter_ultima_jogada_coluna(e);
    int l = obter_ultima_jogada_linha(e);

    if (obter_casa(e, 7, 0)== BRANCA)
    {

        return 1;
    }
    else if (obter_casa(e, 0, 7)== BRANCA)
    {

        return 2;
    }
    else if (
            obter_casa(e,c+1,l)!= VAZIO && obter_casa(e,c-1,l) != VAZIO &&
            obter_casa(e,c,l+1)!= VAZIO && obter_casa(e,c,l-1)!= VAZIO &&
            obter_casa(e,c+1,l+1)!= VAZIO && obter_casa(e,c-1,l-1)!= VAZIO &&
            obter_casa(e,c+1,l-1)!= VAZIO && obter_casa(e,c-1,l+1)!= VAZIO)
    {

        return (obter_jogador_atual(e) == 1)? 2 : 1;

    }
}