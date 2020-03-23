//
// Created by tiago on 21/03/20.
//

#include <printf.h>
#include "mostra_movimentos.h"
#include "../dados/obter_dados.h"
#include <stdio.h>

void mostra_movimentos (ESTADO e) {
    int i, c1,c2,l1,l2;
    char mov;
    for (i=0; i <=obter_num_jogadas(e); i++)
    {
        c1 = obter_jogada_jogador_coluna(e,i,1);
        c2 = obter_jogada_jogador_coluna(e,i,2);
        l1 = obter_jogada_jogador_linha(e,i,1);
        l2 = obter_jogada_jogador_linha(e,i,2);


        if((c1 != 0 || l1 != 0)  && (c1 != 4|| l1 != 3))
        {
            printf("0%d: ",i+1);
            mov = 'a' + obter_jogada_jogador_coluna(e, i, 1);
            printf("%c", mov);
            mov = '8' - obter_jogada_jogador_linha(e, i, 1);
            printf("%c ", mov);
        }
        if((c2 != 0 || l2 != 0)  && (c2 != 4|| l2 != 3))
        {
            mov = 'a' + obter_jogada_jogador_coluna(e, i, 2);
            printf("%c", mov);
            mov = '8' - obter_jogada_jogador_linha(e, i, 2);
            printf("%c ", mov);
            printf("\n");

        }
    }
    if (obter_jogador_atual(e) == 2)
        printf("\n");
}

