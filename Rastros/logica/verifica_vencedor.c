//
// Created by tiago on 19/03/20.
//

#include "verifica_vencedor.h"
#include "../interface/mostra_tabuleiro.h"
#include "../dados/obter_dados.h"
#include <stdlib.h>
#include <stdio.h>

void verifica_vencedor (ESTADO e) // verifica se alguem ganhou
{
    if (obter_casa(e, 7, 0)== BRANCA)
    {
        mostrar_tabuleiro(e);
        printf("Parabens Jogador 1 Ganhou!");
        exit (0);
    }
    if (obter_casa(e, 0, 7)== BRANCA)
    {
        mostrar_tabuleiro(e);
        printf("Parabens Jogador 2 Ganhou!");
        exit (0);
    }
}