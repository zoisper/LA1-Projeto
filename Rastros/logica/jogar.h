//
// Created by tiago on 09/03/20.
//

/**
@file jogar.h
As funções que adicionam uma jogada.
*/
#ifndef PROJETO_JOGAR_H
#define PROJETO_JOGAR_H
#include "../dados/inicializa_estado.h"
/**
 * \brief Coloca, se a jogada for valida, uma peça branca na coordendada jogada e uma peça preta na ultima jogada.\nVerfifica se algum jogador venceu o jogo.
 * @param estado Apontador para estado.\n
 * @param c A coordendad.\n
 * @return 1 se a jogada for possivel e 0 caso não seja possivel jogar.
 */
int jogar(ESTADO *e, COORDENADA c);
/**
 * \brief Verifica se uma jogada é valida.
 * @param e O Estado.\n
 * @param c A coordenada.\n
 * @return 1 se a jogada for valida e 0 se não for.
 */
int valida_jogada(ESTADO e, COORDENADA c);
/**
 * \brief Verifica se algum jogador venceu o jogo.
 * @param e O estado.
 */
int verifica_vencedor (ESTADO e);
#endif //PROJETO_JOGAR_H
