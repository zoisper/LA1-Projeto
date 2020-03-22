//
// Created by tiago on 08/03/20.
//
/**
@file muda_dadosh
Definição das funçoes que manipulam o estado
*/

#ifndef PROJETO_MUDA_DADOS_H
#define PROJETO_MUDA_DADOS_H

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
void incrementa_jogador_atual (ESTADO *e);
void muda_jogador_atual (ESTADO *e, int n);
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
void incrementa_num_jogadas (ESTADO *e);
void muda_num_jogadas (ESTADO *e, int n);
/**
 * \brief Altera a casa para o estado do ficheiro que foi lido.
 * @param e Apontador para o estado.\n
 * @param linha A linha do tabuleiro.\n
 * @param coluna A coluna do tabuleiro.\n
 * @param carater O carater que estava gravado no ficheiro.\n
 */
void retoma_casa (ESTADO *e, int linha, int coluna, char carater);

#endif //PROJETO_MUDA_DADOS_H

