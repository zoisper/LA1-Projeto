//
// Created by tiago on 21/03/20.
//

#include <printf.h>
#include "mostra_movimentos.h"
#include "../dados/obter_dados.h"
#include <stdio.h>

void mostra_movimentos (ESTADO e) {
    int i;
    char mov;
    if (obter_num_jogadas(e) > 0 && obter_jogador_atual(e) == 1)
    {
        printf("\n");
        printf("01: ");
        for (i = 0; i < obter_num_jogadas(e); i++) {
            mov = 'a' + obter_jogada_jogador_coluna(e, i, 1);
            printf("%c", mov);
            mov = '8' - obter_jogada_jogador_linha(e, i, 1);
            printf("%c ", mov);
        }
        printf("\n");
        printf("02: ");
        for (i = 0; i < obter_num_jogadas(e); i++) {
            mov = 'a' + obter_jogada_jogador_coluna(e, i, 2);
            printf("%c", mov);
            mov = '8' - obter_jogada_jogador_linha(e, i, 2);
            printf("%c ", mov);
        }
        printf("\n");
    }
    else
        if (obter_num_jogadas(e) > 0 && obter_jogador_atual(e) == 2) {
        printf("\n");
        printf("01: ");
        for (i = 0; i < obter_num_jogadas(e) + 1; i++) {
            mov = 'a' + obter_jogada_jogador_coluna(e, i, 1);
            printf("%c", mov);
            mov = '8' - obter_jogada_jogador_linha(e, i, 1);
            printf("%c ", mov);
        }
        printf("\n");
        printf("02: ");
        for (i = 0; i < obter_num_jogadas(e); i++) {
            mov = 'a' + obter_jogada_jogador_coluna(e, i, 2);
            printf("%c", mov);
            mov = '8' - obter_jogada_jogador_linha(e, i, 2);
            printf("%c ", mov);
        }
        printf("\n");

    }
    else
        if (obter_num_jogadas(e) == 0 && obter_jogador_atual(e) == 2)
        {
            printf("\n");
            printf("01: ");
            mov = 'a' + obter_jogada_jogador_coluna(e, 0, 1);
            printf("%c", mov);
            mov = '8' - obter_jogada_jogador_linha(e, 0, 1);
            printf("%c ", mov);
            printf("\n");
            printf("02: ");
            printf("\n");
        }
        else
            printf("\n01:\n02:\n");

}