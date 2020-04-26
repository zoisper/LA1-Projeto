

/**
@file gravar_jogo.h
As função que imprimem o tabuleiro e os movimentos.
*/
#ifndef PROJETO_MOSTRA_H
#define PROJETO_MOSTRA_H
#include <stdio.h>
#include "inicializar_estado.h"

/**
 * \brief Imprime o tabuleiro do jogo num ficheiro passado por parametro.
 * @param e O estado.
 */
void imprime_tabuleiro(ESTADO e,FILE *fp);

/**
 * Função que vai mostrar todos os movimentos realizados pelos jogadores num ficheiro passado por parametro.\n
 * @param e Apontador para o estado.\n
 * @param fp Apontador para o ficheiro.
 */
void imprime_movimentos (ESTADO e,FILE *fp);

#endif //PROJETO_MOSTRA_H
