//
// Created by tiago on 09/03/20.
//

#include "logica.h"
#include "interface.h"
#include <stdio.h>
#include <stdlib.h>

int jogar(ESTADO *e, COORDENADA c)
{
    //esta função deverá receber o estado atual e uma coordenada e modificar
    //o estado ao jogar na casa correta se a jogada for válida. A função devolve
    //verdadeiro (valor diferente de zero) se for possível jogar e falso (zero) caso
    //não seja possível.

    printf("jogar %d %d\n", c.coluna, c.linha);


        muda_casa(e, c);
        muda_jogadas(e, c);
        if (obter_jogador_atual(*e) == 2)
            muda_num_jogadas(e);
        muda_jogador_atual(e);
        muda_ultima_jogada(e, c);

    return 1;
}



