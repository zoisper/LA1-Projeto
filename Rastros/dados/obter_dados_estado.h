
/**
@file obter_dados_estado.h
Definição das funçoes que obtem informação do estado
*/
#ifndef PROJETO_OBTER_DADOS_ESTADO_H
#define PROJETO_OBTER_DADOS_ESTADO_H
#include "inicializa_estado.h"
/**
 * \brief Devolve o valor de uma casa.
 * @param e O estado.\n
 * @param coluna A coordenada da coluna da casa.\n
 * @param linha A coordendanda da linha da casa.\n
 * @return O valor da casa.
 */
CASA obter_casa(ESTADO e, int coluna, int linha);
/**
 * \brief Devolve o numero do jogador atual
 * @param e O estado.\n
 * @return O numero do jogador atual.
 */
int obter_jogador_atual (ESTADO e);

/**
 * \brief Devolve o numero de jogadas.
 * @param e O estado.\n
 * @return O numeoro de jogadas.
 */
int obter_num_jogadas (ESTADO e);
/**
 * \brief Devolve a coordendada da coluna da ultima jogada
 * @param e O estado.\n
 * @return A coordenada da coluna da ultima jogada.
 */
int obter_ultima_jogada_coluna(ESTADO e);
/**
 * \brief Devolve a coordendada da linha da ultima jogada.
 * @param e O estado.\n
 * @return A coordenada da linha da ultima jogada.
 */
int obter_ultima_jogada_linha(ESTADO e);
/**
 * \brief Coloca "BRANCA" na casa da cordenada jogada e coloca "PRETA" na casa jogada anteriormente.
 * @param e Apontador para o estado.\n
 * @param c A cordenada.
 */
int obter_jogada_jogador_coluna(ESTADO e, int num_jogada,int jogador);
/**
 * \brief Obtem a cordenada da linha de uma jogada de um jogador.
 * @param e O estado.\n
 * @param num_jogada O número da jogada.\n
 * @param jogador O número do jogador.\n
 * @return A cordenada da linha dessa jogada desse jogado.
 */
int obter_jogada_jogador_linha(ESTADO e, int num_jogada,int jogador);

#endif //PROJETO_OBTER_DADOS_ESTADO_H
