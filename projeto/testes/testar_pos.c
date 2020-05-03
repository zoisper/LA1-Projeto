/**
@file testar_pos.c
Função que testa o comandos pos.
 */
#include "testar_pos.h"
#include "../logica/fazer_jogada.h"
#include "../logica/comando_pos.h"
#include <assert.h>
#include "../dados/obter_dados_estado.h"

void testa_pos(ESTADO e)
{
    COORDENADA coord = {5,2};
    jogar(&e, coord);
    coord.coluna = 6;
    coord.linha = 1;
    jogar(&e, coord);
    coord.coluna = 7;
    coord.linha = 1;
    jogar(&e, coord);
    coord.coluna = 7;
    coord.linha = 2;
    jogar(&e, coord);
    pos_jogada(&e,  2);
    assert(obter_num_jogadas(e) == 2);
    pos_jogada(&e,  1);
    assert(obter_num_jogadas(e) == 1);
    pos_jogada(&e,  2);
    assert(obter_num_jogadas(e) == 2);
    pos_jogada(&e,  0);
    assert(obter_num_jogadas(e) == 0);
    pos_jogada(&e,  2);
    assert(obter_num_jogadas(e) == 2);
    pos_jogada(&e,  1);
    coord.coluna = 7;
    coord.linha = 1;
    jogar(&e, coord);
    pos_jogada(&e,  2);
    assert(obter_num_jogadas(e) == 1);
    assert(obter_ultima_jogada_linha(e) == 1 && obter_ultima_jogada_coluna(e) == 7);
    pos_jogada(&e,  1);
    assert(obter_num_jogadas(e) == 1);
    assert(obter_ultima_jogada_linha(e) == 1 && obter_ultima_jogada_coluna(e) == 6);
}