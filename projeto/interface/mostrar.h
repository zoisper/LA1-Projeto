

/**
@file mostrar.h
As função que imprimem o tabuleiro e os movimentos.
*/
#ifndef PROJETO_MOSTRAR_H
#define PROJETO_MOSTRAR_H
#include <stdio.h>
#include "../dados/inicializa_estado.h"

/**
 * \brief Imprime o tabuleiro do jogo num ficheiro passado por parametro.\n
 * @param e O estado.\n
 * @param fp O eficheiro onde o tabuleiro vai ser imprimido.\n
 * @param legenda Parametro que controla se anumeraçao das colunas e linhas são imprimidos.
 */
void mostrar_tabuleiro (ESTADO e, FILE *fp, int legenda);

/**
 * Função que vai mostrar todos os movimentos realizados pelos jogadores num ficheiro passado por parametro.\n
 * @param e Apontador para o estado.\n
 * @param fp Apontador para o ficheiro.
 */
void mostrar_movimentos (ESTADO e,FILE *fp);


#endif //PROJETO_MOSTRAR_H
