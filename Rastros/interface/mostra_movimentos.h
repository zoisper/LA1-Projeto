//
// Created by tiago on 21/03/20.
//
/**
@file mostra_movimentos.h
Funçao que mostra os moviementos.
*/
#ifndef PROJETO_MOSTRA_MOVIMENTOS_H
#define PROJETO_MOSTRA_MOVIMENTOS_H

#include "../dados/inicializa_estado.h"
/**
 * Função que vai mostrar todos os movimentos realizados pelos jogadores num ficheiro passado por parametro.\n
 * @param e Apontador para o estado.\n
 * @param fp Apontador para o ficheiro.
 */
void mostra_movimentos (ESTADO e,FILE *fp);

#endif //PROJETO_MOSTRA_MOVIMENTOS_H
