//
// Created by tiago on 19/03/20.
//

#include "verifica_vencedor.h"
#include "../dados/obter_dados.h"


int verifica_vencedor (ESTADO e) // verifica se alguem ganhou
{
    int c = obter_ultima_jogada_coluna(e);
    int l = obter_ultima_jogada_linha(e);

    if (obter_casa(e, 0, 7)== BRANCA)
        return 1;
    else
        if (obter_casa(e, 7, 0)== BRANCA)
            return 2;

    else
        if (
                (obter_casa(e,l+1,c)!= VAZIO || l+1 > 7) &&
                (obter_casa(e,l-1,c)!= VAZIO || l-1 < 0) &&
                (obter_casa(e,l,c+1)!= VAZIO || c+1 > 7)  &&
                (obter_casa(e,l,c-1)!= VAZIO || c-1 < 0)  &&
                (obter_casa(e,l+1,c+1)!= VAZIO || c+1 > 7 || l+1 > 7) &&
                (obter_casa(e,l-1,c-1)!= VAZIO || l-1 < 0 || c-1 < 7 ) &&
                (obter_casa(e,l+1,c-1)!= VAZIO ||l+1 > 7 || c-1 < 0)  &&
                (obter_casa(e,l-1,c+1)!= VAZIO || l-1 < 0 || c+1 > 7 )
            )
            return (obter_jogador_atual(e) == 1) ? 2 : 1;
    return 0;
}