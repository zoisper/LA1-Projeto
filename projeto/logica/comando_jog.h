
/**
@file comando_jog.h
As funções que implementam o comando jog.
*/

#ifndef PROJETO_COMANDO_JOG_H
#define PROJETO_COMANDO_JOG_H

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
 * @param num_nodo O nodo que tem a coordenada pertendida.\n
 * @return A coordernada.
 */
COORDENADA obter_coordenada_lista (LISTA lista, int num_nodo);

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
/**
 * \brief Função que obtem a melhor jogada com base no algoritmo minimax.\n
 * @param e O valor do estado.\n
 * @param profundidade A profundidade ate onde o algoritmo minimax vai ser testado.\n
 * @return A coordernada da jogada escolhida.
 */
COORDENADA jog_minimax (ESTADO e, int profundidade);
/**
* \brief Função que obtem o score de todas as jogadas possiveis com base no algoritmo minimax.\n
* @param scores O array onde vao ser guardados os scores.\n
* @param size O tamanho do array scores.\n
* @param e O valor do estado.\n
* @param lista Uma lista ligada com as jogadas possiveis.\n
* @param profundidade A profundidade ate onde o algoritmo minimax vai ser testado.\n
*/
void scores_possiveis(int scores[], int size, ESTADO e, LISTA lista, int profundidade);

/**
 * \brief Função que obtem o score de cada jogada com base no algoritmo minimax.\n
 * @param e O valor do estado.\n
 * @param jogada A jogada que vai ser testada.\n
 * @param profundidade A profundidade ate onde o algoritmo minimax vai ser testado.\n
 * @return O score obtido para essa jogada.
 */
int obter_score (ESTADO e, COORDENADA coord, int profundidade);
/**
 * \brief Função que recebe um array de tamanho size e retorna o menor elemento.\n
 * @param array O array.\n
 * @param size O tamanho do array.\n
 * @return O menor elemento.
 */
int min ( int array[],  int size  );
/**
 * \brief Função que recebe um array de tamanho size e retorna o maior elemento.\n
 * @param array O array.\n
 * @param size O tamanho do array.\n
 * @return O maior elemento.
 */
int max ( int array[],  int size  );
/**
 * \brief Função que recebe um array de tamanho size e retorna o indice do menor elemento.\n
 * @param array O array.\n
 * @param size O tamanho do array.\n
 * @return O indice do menor elemento.
 */
int min_index ( int array[],  int size  );
/**
 * \brief Função que recebe um array de tamanho size e retorna o indice do maiorr elemento.\n
 * @param array O array.\n
 * @param size O tamanho do array.\n
 * @return O indice do maiorr elemento.
 */
int max_index ( int array[],  int size  );
#endif //PROJETO_COMANDO_JOG_H
