
/**
@file comando_jog.h
As funções que implementam o comando jog.
*/

#ifndef PROJETO_COMANDO_JOG_H
#define PROJETO_COMANDO_JOG_H

#include "../dados/lista.h"
#include "../dados/inicializar_estado.h"

/**
 * \brief Cria uma lista ligada com todas as jogadas possiveis.\n
 * @param e O valor do estado.\n
 * @return Uma lista com as jogadas possiveis.
 */
LISTA jogadas_possiveis(ESTADO e);
/**
 * \brief Função que acede à lista das jogadas possivies e obtem a coordendada guardada no nodo passado por parametro.\n
 * @param lista A lista com as jogadas possiveis.\n
 * @param num_nodo O nodo que tem a coordenada pertendida.\n
 * @return A coordernada.
 */
COORDENADA obter_coordenada_lista (LISTA lista, int num_nodo);

/**
 * \brief Obtem um número random dentro de um intervalo.
 * @param min O limite inferior.\n
 * @param max O limite superior.\n
 * @return O número obtido.
 */
int obter_num_random (int min, int max);
/**
 * \brief Obtem as coordenadas de uma jogada geradas aleatoriamente.
 * @param e O valor do estado.\n
 * @return A coordernada da jogada escolhida aleatoriamente.
 */
COORDENADA jog_random (ESTADO e);
/**
 * \brief Obtem a melhor jogada com base no algoritmo minimax.
 * @param e O valor do estado.\n
 * @param profundidade A profundidade ate onde o algoritmo minimax vai ser testado.\n
 * @return A coordernada da jogada escolhida.
 */
COORDENADA jog_minimax (ESTADO e, int profundidade);
/**
* \brief Obtem o score de todas as jogadas possiveis com base no algoritmo minimax.
* @param scores O array onde vao ser guardados os scores.\n
* @param size O tamanho do array scores.\n
* @param e O valor do estado.\n
* @param lista Uma lista ligada com as jogadas possiveis.\n
* @param profundidade A profundidade ate onde o algoritmo minimax vai ser testado.\n
*/
void scores_possiveis(int scores[], int size, ESTADO e, LISTA lista, int profundidade);

/**
 * \brief Obtem o score de uma jogada com base no algoritmo minimax.
 * @param e O valor do estado.\n
 * @param jogada A jogada que vai ser testada.\n
 * @param profundidade A profundidade ate onde o algoritmo minimax vai ser testado.\n
 * @return O score obtido para essa jogada.
 */
int obter_score (ESTADO e, COORDENADA coord, int profundidade);
/**
 * \brief Função que recebe um array de tamanho size e retorna o menor elemento.
 * @param array O array.\n
 * @param size O tamanho do array.\n
 * @return O menor elemento.
 */
int min ( int array[],  int size  );
/**
 * \brief Função que recebe um array de tamanho size e retorna o maior elemento.
 * @param array O array.\n
 * @param size O tamanho do array.\n
 * @return O maior elemento.
 */
int max ( int array[],  int size  );
/**
 * \brief Função que recebe um array de tamanho size e retorna o indice do menor elemento.
 * @param array O array.\n
 * @param size O tamanho do array.\n
 * @return O indice do menor elemento.
 */
int min_index ( int array[],  int size  );
/**
 * \brief Função que recebe um array de tamanho size e retorna o indice do maior elemento.
 * @param array O array.\n
 * @param size O tamanho do array.\n
 * @return O indice do maior elemento.
 */
int max_index ( int array[],  int size  );
#endif //PROJETO_COMANDO_JOG_H
