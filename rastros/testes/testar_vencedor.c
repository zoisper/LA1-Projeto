/**
@file testar_vencedor.c
Função que realiza varias jogadas e verifica se o vencedor é o correto.
*/

#include "testar_vencedor.h"
#include "../logica/fazer_jogada.h"
#include "../dados/mudar_estado.h"
#include "../logica/fim_jogo.h"
#include <assert.h>



void testa_vencedor(ESTADO e)
{
    int vencedor = 0;
    COORDENADA coord = {5,2};
    jogar(&e, coord);
    coord.coluna = 6;
    coord.linha = 1;
    jogar(&e, coord);
    coord.coluna = 7;
    coord.linha = 0;
    jogar(&e, coord);
    vencedor = verificar_vencedor(e);
    assert(vencedor == 2);

    reiniciar_estado(&e);

    coord.coluna = 3;
    coord.linha = 4;
    jogar(&e, coord);
    coord.coluna = 2;
    coord.linha = 5;
    jogar(&e, coord);
    coord.coluna = 1;
    coord.linha = 6;
    jogar(&e, coord);
    coord.coluna = 0;
    coord.linha = 7;
    jogar(&e, coord);
    vencedor = verificar_vencedor(e);
    assert(vencedor == 1);

    reiniciar_estado(&e);

    coord.coluna = 4;
    coord.linha = 2;
    jogar(&e, coord);

    coord.coluna = 5;
    coord.linha = 2;
    jogar(&e, coord);

    coord.coluna = 5;
    coord.linha = 3;
    jogar(&e, coord);

    coord.coluna = 5;
    coord.linha = 4;
    jogar(&e, coord);

    coord.coluna = 5;
    coord.linha = 5;
    jogar(&e, coord);

    coord.coluna = 4;
    coord.linha = 5;
    jogar(&e, coord);

    coord.coluna = 3;
    coord.linha = 5;
    jogar(&e, coord);

    coord.coluna = 3;
    coord.linha = 4;
    jogar(&e, coord);

    coord.coluna = 3;
    coord.linha = 3;
    jogar(&e, coord);

    coord.coluna = 4;
    coord.linha = 4;
    jogar(&e, coord);
    vencedor = verificar_vencedor(e);
    assert(vencedor == 2);




}