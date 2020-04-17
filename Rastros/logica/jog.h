
/**
@file jog.h
As funções que implementam o comando jog.
*/

#ifndef PROJETO_JOG_H
#define PROJETO_JOG_H

#include "../dados/lista.h"
#include "../dados/inicializa_estado.h"

/**
 * \brief Cria uma lista ligada com todas as jogadas possiveis.\n
 * @param e O valor do estado.\n
 * @return Uma lista com as jogadas possiveis.
 */
LISTA jogadas_possiveis(ESTADO e);
/**
 * \brief Escolhe aleatoriamente uma jogada de uma lista de jogadas possiveis.\n
 * @param lista A lista com as jogadas possiveis.\n
 * @return A coordernada da jogada escolhida.
 */
COORDENADA escolhe_jogada_random (LISTA lista);

/**
 * \brief Função que chama as funçoes jogadas_possiveis e escolhe_jogada_random .\n
 * @param e O valor do estado.\n
 * @return A coordernada da jogada escolhida aleatoriamente.
 */COORDENADA jog_random (ESTADO e);
#endif //PROJETO_JOG_H
