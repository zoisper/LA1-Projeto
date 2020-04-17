

/**
@file mostra.h
As função que imprimem o tabuleiro e os movimentos.
*/
#ifndef PROJETO_MOSTRA_H
#define PROJETO_MOSTRA_H
#include <stdio.h>
#include "../dados/inicializa_estado.h"

/**
 * \brief Mostra o tabuleiro do jogo.
 * @param e O estado.
 */
void mostrar_tabuleiro(ESTADO e);

/**
 * Função que vai mostrar todos os movimentos realizados pelos jogadores num ficheiro passado por parametro.\n
 * @param e Apontador para o estado.\n
 * @param fp Apontador para o ficheiro.
 */
void mostra_movimentos (ESTADO e,FILE *fp);

#endif //PROJETO_MOSTRA_H
