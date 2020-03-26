//
// Created by tiago on 19/03/20.
//
/**
@file retoma_estado.h
As funções que vão ler o tabuleiro e movimentos de um ficheiro.
*/
#ifndef PROJETO_RETOMA_ESTADO_H
#define PROJETO_RETOMA_ESTADO_H

#include "inicializa_estado.h"
#include <stdio.h>


/**
 * \brief Reinicia o estado.\n
 * @param e Apontador para estado.\n
 */
void reinicia_estado (ESTADO *e);
/**
 * \brief Lẽ o tabuleiro de um ficheiro.\n
 * @param e Apontador para estado.\n
 * @param fp Apontador para o ficheiro onde o tabuleiro está guardado.
 */
void retoma_tabuleiro (ESTADO *e, FILE *fp);
/**
 * \brief Lẽ os moovimentos de um ficheiro.\n
 * @param e Apontador para estado.\n
 * @param fp Apontador para o ficheiro onde os movimentos estão guardados.
 */
void retoma_movimentos(ESTADO *e, FILE *fp);

/**
 * \brief Altera a casa para o valor que estava gravado no ficheiro lido.
 * @param e Apontador para o estado.\n
 * @param linha A linha do tabuleiro.\n
 * @param coluna A coluna do tabuleiro.\n
 * @param carater O carater que estava gravado no ficheiro.\n
 */
void retoma_casa (ESTADO *e, int linha, int coluna, char carater);

#endif //PROJETO_RETOMA_ESTADO_H
