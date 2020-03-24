//
// Created by tiago on 19/03/20.
//
/**
@file verifica_vencedor.h
As funções que verifica se algum jogador venceu o jogo.
*/
#ifndef PROJETO_VERIFICA_VENCEDOR_H
#define PROJETO_VERIFICA_VENCEDOR_H
#include "../dados/inicializa_estado.h"

/**
 * \brief Verifica se algum jogador venceu o jogo.
 * @param e O estado.
 * @return Retorna 0 se nao houver vencedor ou retorna 1 ou 2 consoante o jogador que venceu.
 */
int verifica_vencedor (ESTADO e);
#endif //PROJETO_VERIFICA_VENCEDOR_H
