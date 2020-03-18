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

CASA obter_casa(ESTADO e, int linha, int coluna) // diz qual o estado da casa {VAZIO,BRANCA,Preta}
{
    return e.tab[linha][coluna];
}

void muda_casa(ESTADO *e, COORDENADA c) // passa a casa onde estava para PRETA e mete a nova com BRANCA
{
    e->tab[c.linha][c.coluna] = BRANCA;
    e->tab[e->ultima_jogada.linha][e->ultima_jogada.coluna] = PRETA;
}

void muda_jogadas(ESTADO *e, COORDENADA c) // acrescenta a jogada as jogadas ja efetuadas
{


    if (e->jogador_atual == 1)
    {
        e->jogadas[e->num_jogadas].jogador1.coluna = c.coluna;
        e->jogadas[e->num_jogadas].jogador1.linha = c.linha;
    }

    else
    {
        e->jogadas[e->num_jogadas].jogador2.coluna = c.coluna;
        e->jogadas[e->num_jogadas].jogador2.linha = c.linha;

    }
}
int obter_jogador_atual (ESTADO e) // diz qual o jogador atual
{
    return e.jogador_atual;
}
int obter_num_jogadas (ESTADO e)
{
    return e.num_jogadas;
}
int obter_ultima_jogada_coluna(ESTADO e)
{
    return e.ultima_jogada.coluna;
}
int obter_ultima_jogada_linha(ESTADO e)
{
    return e.ultima_jogada.linha;
}

void muda_num_jogadas (ESTADO *e) // incrementa numero de jogadas
{
    e->num_jogadas++;
}

void muda_jogador_atual (ESTADO *e) // altera qual o jogador atual
{
    e->jogador_atual = (e->jogador_atual == 1)? 2 : 1;
}

void muda_ultima_jogada (ESTADO *e, COORDENADA c) // altera a ultima jogada para as coordenadas que recebe
{
    e->ultima_jogada.linha = c.linha;
    e->ultima_jogada.coluna= c.coluna;
}