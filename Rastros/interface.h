//
// Created by tiago on 08/03/20.
//

/**
@file interface.h
As funções que tratam da interface do jogo.
*/
#ifndef PROJETO_INTERFACE_H
#define PROJETO_INTERFACE_H
#include <stdio.h>
#include "dados.h"

/**
 * \brief Mostra o tabuleiro do jogo.
 * @param e O estado.
 */
void mostrar_tabuleiro(ESTADO e);
/**
 * \brief Interpreta os comandos enviados pelo utilizador e chama a função necessaria.
 * @param e Apontador para estado.\n
 * @return 1 se o comando for valido e 0 se for invalido.
 */
int interpretador(ESTADO *e);
/**
 * \brief Prompt com o numeor de comandos, o jogador atual e o némero da jogada.
 * @param e O estado.\n
 * @param controlo Variavel que vai indicar se o nummero de comandos do prompt incrementa ou nao.
 */
void prompt (ESTADO e, int controlo);


#endif //PROJETO_INTERFACE_H
