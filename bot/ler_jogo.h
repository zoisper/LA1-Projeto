
/**
@file ler_jogo.h
A função que lê o jogo de um ficheiro.
*/
#ifndef PROJETO_GRAVAR_LER_JOGO_H
#define PROJETO_GRAVAR_LER_JOGO_H

#include <stdio.h>
#include "inicializar_estado.h"

/**
 * \brief Lê o tabuleiro e os movimentos de um ficheiro passado por parametro.
 * @param e Apontador para estado.\n
 * @param fp Apontador para o ficheiro.
 */
void ler_jogo (ESTADO *e, FILE *fp);
#endif //PROJETO_GRAVAR_LER_JOGO_H
