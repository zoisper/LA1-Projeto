//
// Created by tiago on 26/03/20.
//
/**
@file ler_jogo.h
A função que vai ler o jogo de um ficheiro.
*/
#include "../dados/inicializa_estado.h"
#include <stdio.h>

#ifndef PROJETO_LER_JOGO_H
#define PROJETO_LER_JOGO_H
/**
 * \brief Le o estado de um ficheiro.\n
 * @param e Apontador para estado.\n
 * @param fp Apontaor para o ficheiro onde o tabuleiro está guardado.
 */
void ler_jogo (ESTADO *e, FILE *FP);

#endif //PROJETO_LER_JOGO_H
