//
// Created by tiago on 08/03/20.
//

#include "dados.h"
#include <stdlib.h>
int i,j;
ESTADO *inicializar_estado()
{
    ESTADO *e = (ESTADO *) malloc(sizeof(ESTADO));
    for(i=0;i<8;i++)
        for(j=0;j<8;j++)
            e->tab[i][j] = VAZIO;
            e->tab[3][4] = BRANCA;
    e->jogador_atual = 1;
    e->num_jogadas = 0;
    e->ultima_jogada.coluna = 4;
    e->ultima_jogada.linha = 3;
    for(i=0;i<32;i++){
        e->jogadas[i].jogador1.coluna = 0;
        e->jogadas[i].jogador1.linha = 0;
        e->jogadas[i].jogador2.coluna = 0;
        e->jogadas[i].jogador2.linha = 0;
    }

    return e;
}
