//
// Created by tiago on 19/03/20.
//
/**
@file retoma_jogo.h
As funções que vão ler o jogo de um ficheiro.
*/
#ifndef PROJETO_RETOMA_ESTADO_H
#define PROJETO_RETOMA_ESTADO_H

#include "inicializa_estado.h"
#include <stdio.h>

/**
 * \brief Retoma o jogo a partir de um ficheiro.
 * @param e Apontador para estado.\n
 * @param fp Ficheiro onde o estado do jogo esta gravado.
 */
void retoma_jogo (ESTADO *e, FILE  *fp);

/**
 * \brief Altera a casa para o valor que estava gravado no ficheiro lido.
 * @param e Apontador para o estado.\n
 * @param linha A linha do tabuleiro.\n
 * @param coluna A coluna do tabuleiro.\n
 * @param carater O carater que estava gravado no ficheiro.\n
 */
void retoma_casa (ESTADO *e, int linha, int coluna, char carater);

#endif //PROJETO_RETOMA_ESTADO_H
