//
// Created by tiago on 12/04/20.
//

#include "mostra_vencedor.h"
#include <stdio.h>
#include <stdlib.h>

void mostra_vencedor (int vencedor)
{
    if (vencedor !=0 )
    {
        printf ("Parabens Jogador %d! \nVenceu o jogo!", vencedor);
        exit (0);
    }
}
