
/**
@file ler_jogo.h
As função que grava o jogo num ficheiro.
*/
#ifndef PROJETO_GRAVAR_LER_JOGO_H
#define PROJETO_GRAVAR_LER_JOGO_H

#include <stdio.h>
#include "inicializar_estado.h"

/**
 * \brief Le o estado de um ficheiro.\n
 * @param e Apontador para estado.\n
 * @param fp Apontaor para o ficheiro onde o tabuleiro está guardado.
 */
void ler_jogo (ESTADO *e, FILE *FP);
#endif //PROJETO_GRAVAR_LER_JOGO_H
