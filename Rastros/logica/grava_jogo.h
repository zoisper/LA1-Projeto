
/**
@file grava_jogo.h
As função que grava o jogo num ficheiro.
*/
#ifndef PROJETO_GRAVA_JOGO_H
#define PROJETO_GRAVA_JOGO_H

#include <stdio.h>
#include "../dados/inicializa_estado.h"

/**
 * \brief Grava o jogo num fcheiro.\n
 * @param e Apontador para estado.\n
 * @param fp Apontador para o ficheiro.
 */

void grava_jogo(ESTADO e, FILE *fp);
#endif //PROJETO_GRAVA_JOGO_H
