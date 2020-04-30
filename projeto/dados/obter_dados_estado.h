
/**
@file obter_dados_estado.h
Definição das funçoes que obtem informação do estado
*/
#ifndef PROJETO_OBTER_DADOS_ESTADO_H
#define PROJETO_OBTER_DADOS_ESTADO_H
#include "inicializar_estado.h"
/**
 * \brief Devolve o valor de uma casa.
 * @param e O valor do estado.\n
 * @param coluna O valor da coluna da casa que se pretende obter.\n
 * @param linha O valor da linha da casa que se pretende obter.\n
 * @return O valor da casa.
 */
CASA obter_casa(ESTADO e, int coluna, int linha);
/**
 * \brief Devolve o numero do jogador atual
 * @param e O valor do estado.\n
 * @return O numero do jogador atual.
 */
int obter_jogador_atual (ESTADO e);

/**
 * \brief Devolve o numero de jogadas.
 * @param e O valor estado.\n
 * @return O numero de jogadas.
 */
int obter_num_jogadas (ESTADO e);
/**
 * \brief Devolve o valor da coluna da ultima jogada
 * @param e O valor do estado.\n
 * @return O valor da coluna da ultima jogada.
 */
int obter_ultima_jogada_coluna(ESTADO e);
/**
 * \brief Devolve o valor da linha da ultima jogada.
 * @param e O valor do estado.\n
 * @return O valor da linha da ultima jogada.
 */
int obter_ultima_jogada_linha(ESTADO e);
/**
 * \brief Obtem o valor da coluna de uma jogada de um jogador.
 * @param e O valor do estado.\n
 * @param num_jogada O número da jogada.\n
 * @param jogador O número do jogador.\n
 * @return O valor da coluna da jogada prentendido.
 */
int obter_jogada_jogador_coluna(ESTADO e, int num_jogada,int jogador);
/**
 * \brief Obtem o valor da linha de uma jogada de um jogador.
 * @param e O valor do estado.\n
 * @param num_jogada O número da jogada.\n
 * @param jogador O número do jogador.\n
 * @return O valor da linha da jogada prentendido.
 */
int obter_jogada_jogador_linha(ESTADO e, int num_jogada,int jogador);

#endif //PROJETO_OBTER_DADOS_ESTADO_H
