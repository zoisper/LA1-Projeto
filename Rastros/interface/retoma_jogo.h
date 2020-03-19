//
// Created by tiago on 19/03/20.
//
/**
@file retoma_jogo.h
As função que vai ler o jogo de um ficheiro.
*/
#ifndef PROJETO_RETOMA_JOGO_H
#define PROJETO_RETOMA_JOGO_H

#include "../dados/inicializar_estado.h"
# include <stdio.h>

/**
 * \brief Retoma o jogo a partir de um ficheiro.
 * @param e Apontador para estado.\n
 * @param fp Ficheiro onde o estado do jogo esta gravado.
 */
void retoma_jogo (ESTADO *e, FILE  *fp);
#endif //PROJETO_RETOMA_JOGO_H
