
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
 * \brief Acede à lista e obtem a coordendada guardada no nodo passado por parametro.\n
 * @param lista A lista com as jogadas possiveis.\n
 * @param nodo O nodo que tem a coordenada pertendida.\n
 * @return A coordernada.
 */
COORDENADA obter_coordenada_lista (LISTA lista, int nodo);

/**
 * \brief Função que obtem um numero random dentro de um intervalo .\n
 * @param min O limite inferior.\n
 * @param max O limite superior.\n
 * @return O número obtido.
 */
int obter_num_random (int min, int max);
/**
 * \brief Função que chama as funçoes jogadas_possiveis, obter_num_random e obter_coordenada_lista para obter uma jogada aleatoria.\n
 * @param e O valor do estado.\n
 * @return A coordernada da jogada escolhida aleatoriamente.
 */
COORDENADA jog_random (ESTADO e);
#endif //PROJETO_JOG_H
