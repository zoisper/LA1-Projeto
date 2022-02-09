/**
@file testar_heuristica.c
Funções de testes aos comandos jog e jog2.
 */
#include <assert.h>
#include "testar_heuristica.h"
#include "../logica/fazer_jogada.h"
#include "../logica/fim_jogo.h"
#include "../logica/comando_jog.h"
#include "../dados/obter_dados_estado.h"
#include "../dados/mudar_estado.h"


void testa_jog(ESTADO e)
{
    COORDENADA coord = {5,4};
    jogar(&e, coord);
    coord.coluna = 6;
    coord.linha = 5;
    jogar(&e, coord);
    coord.coluna = 6;
    coord.linha = 6;
    jogar(&e, coord);
    coord.coluna = 6;
    coord.linha = 7;
    jogar(&e, coord);
    coord.coluna = 7;
    coord.linha = 7;
    jogar(&e, coord);
    coord = jog_random(e);
    jogar(&e, coord);
    assert (obter_num_jogadas(e) == 3);
    assert(obter_ultima_jogada_linha(e) == 6 && obter_ultima_jogada_coluna(e) == 7);
    reiniciar_estado(&e);

    coord = jog_random(e);
    jogar(&e, coord);
    assert (obter_num_jogadas(e) == 0);
    coord = jog_random(e);
    jogar(&e, coord);
    assert (obter_num_jogadas(e) == 1);


}

void testa_jog2(ESTADO e)
{
    COORDENADA coord = {4,2};
    jogar(&e, coord);
    coord.coluna = 4;
    coord.linha = 1;
    jogar(&e, coord);
    coord.coluna = 4;
    coord.linha = 0;
    jogar(&e, coord);
    coord.coluna = 5;
    coord.linha = 0;
    jogar(&e, coord);
    coord.coluna = 5;
    coord.linha = 1;
    jogar(&e, coord);
    coord = jog_minimax(e,5);
    jogar(&e, coord);
    coord = jog_minimax(e,5);
    jogar(&e, coord);
    coord = jog_minimax(e,5);
    jogar(&e, coord);
    assert (verificar_vencedor(e) == 2);

}