//
// Created by tiago on 09/03/20.
//

#include "logica.h"
#include <stdio.h>

int jogar(ESTADO *e, COORDENADA c)
{
    //esta função deverá receber o estado atual e uma coordenada e modificar
    //o estado ao jogar na casa correta se a jogada for válida. A função devolve
    //verdadeiro (valor diferente de zero) se for possível jogar e falso (zero) caso
    //não seja possível.

    printf("jogar %d %d\n", c.coluna, c.linha);
    e->tab[8-c.linha][c.coluna-1] = BRANCA;
    e->tab[e->ultima_jogada.linha][e->ultima_jogada.coluna] = PRETA;

    if (e->jogador_atual == 1)
    {
        e->jogadas[e->num_jogadas].jogador1.coluna = c.coluna;
        e->jogadas[e->num_jogadas].jogador1.linha = c.linha;
    }

    else
    {
        e->jogadas[e->num_jogadas].jogador2.coluna = c.coluna;
        e->jogadas[e->num_jogadas].jogador2.linha = c.linha;
        e->num_jogadas++;
    }

    e->jogador_atual = (e->jogador_atual == 1)? 2 : 1;
    e->ultima_jogada.linha = c.linha;
    e->ultima_jogada.coluna= c.coluna;
    return 1;

}
