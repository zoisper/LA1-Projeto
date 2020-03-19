//
// Created by tiago on 08/03/20.
//
/**
@file muda_estado.h
Definição das funçoes que manipulam o estado
*/

#ifndef PROJETO_MUDA_ESTADO_H
#define PROJETO_MUDA_ESTADO_H

#include "inicializar_estado.h"

/**
 * \brief Coloca "BRANCA" na casa da cordenada jogada e coloca "PRETA" na casa jogada anteriormente.
 * @param e Apontador para o estado.\n
 * @param c A cordenada.
 */
void muda_casa(ESTADO *e, COORDENADA c);
/**
 * \brief Acrescenta a cordenada jogada ás jogadas.
 * @param e Apontador para o estado.\n
 * @param c A cordenada.
 */
void muda_jogadas(ESTADO *e, COORDENADA c);
/**
 * \brief Altera o jogador atual.
 * @param e Apontador para o estado.
 */
void muda_jogador_atual (ESTADO *e);
/**
 * \brief Altera a ultima jogada.
 * @param e Apontador para o estado.\n
 * @param c A cordenada.
 */
void muda_ultima_jogada (ESTADO *e, COORDENADA c);
/**
 * \brief Incrementa o número de jogadas.
 * @param e Apontador para o estado.\n
 */
void muda_num_jogadas (ESTADO *e);

#endif //PROJETO_MUDA_ESTADO_H
