//
// Created by tiago on 19/03/20.
//
/**
@file prompt.h
As função responssavel pelo prompt.
*/
#ifndef PROJETO_PROMPT_H
#define PROJETO_PROMPT_H
#include "../dados/inicializar_estado.h"
/**
 * \brief Prompt com o numeor de comandos, o jogador atual e o némero da jogada.
 * @param e O estado.\n
 * @param controlo Variavel que vai indicar se o nummero de comandos do prompt incrementa ou nao.
 */
void prompt (ESTADO e, int controlo);
#endif //PROJETO_PROMPT_H
