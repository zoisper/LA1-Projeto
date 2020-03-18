//
// Created by tiago on 09/03/20.
//

/**
@file logica.h
As funções que tratam da lógica do jogo.
*/
#ifndef PROJETO_LOGICA_H
#define PROJETO_LOGICA_H
#include "dados.h"
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

#endif //PROJETO_LOGICA_H
