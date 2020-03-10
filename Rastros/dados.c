//
// Created by tiago on 08/03/20.
//

#include "dados.h"
#include <stdlib.h>
int i,j;
ESTADO *inicializar_estado()
{
    ESTADO *e = (ESTADO *) malloc(sizeof(ESTADO));

    e->jogador_atual = 1;
    e->num_jogadas = 0;



    return e;
}
