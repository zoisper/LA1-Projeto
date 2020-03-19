//
// Created by tiago on 19/03/20.
//
/**
@file grava_jogo.h
As função que grava o jogo num ficheiro.
*/
#ifndef PROJETO_GRAVA_JOGO_H
#define PROJETO_GRAVA_JOGO_H

#include <stdio.h>
#include "../dados/inicializar_estado.h"

/**
 * \brief Interpreta os comandos enviados pelo utilizador e chama a função necessaria.
 * @param e Apontador para estado.\n
 * @return 1 se o comando for valido e 0 se for invalido.
 */

void grava_jogo(ESTADO e, FILE *fp);
#endif //PROJETO_GRAVA_JOGO_H
