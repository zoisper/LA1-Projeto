
/**
@file mudar_estado.h
Definição das funçoes que manipulam o estado.
*/

#ifndef PROJETO_MUDA_ESTADO_H
#define PROJETO_MUDA_ESTADO_H

#include "inicializar_estado.h"
#include <stdio.h>

/**
 * \brief Coloca "BRANCA" na casa da coordenada jogada e coloca "PRETA" na casa jogada anteriormente.
 * @param e Apontador para o estado.\n
 * @param coord A coordenada.
 */
void muda_casa(ESTADO *e, COORDENADA coord);
/**
 * \brief Acrescenta a cordenada jogada ao array das jogadas efetuadas até ao momento.
 * @param e Apontador para o estado.\n
 * @param coord A coordenada.
 */
void muda_jogadas(ESTADO *e, COORDENADA coord);
/**
 * \brief Troca o jogador atual.
 * @param e Apontador para o estado.
 */
void muda_jogador_atual (ESTADO *e);

/**
 * \brief Altera o valor da  ultima jogada para o valor da coordenada jogada.
 * @param e Apontador para o estado.\n
 * @param coord A coordenada.
 */
void muda_ultima_jogada (ESTADO *e, COORDENADA coord);
/**
 * \brief Incrementa o número de jogadas.
 * @param e Apontador para o estado.\n
 */
void incrementa_num_jogadas (ESTADO *e);

/**
 * \brief Reinicia o estado colocando o tabuleiro na posição inicial e todos os campos do estado no valor por omissão.
 * @param e Apontador para estado.\n
 */
void reiniciar_estado (ESTADO *e);

/**
 * \brief Altera a casa do tabuleiro para o valor do caracter lido do ficheiro.
 * @param e Apontador para o estado.\n
 * @param linha A linha do tabuleiro.\n
 * @param coluna A coluna do tabuleiro.\n
 * @param carater O carater lido do ficheiro.\n
 */
void retoma_casa (ESTADO *e, int linha, int coluna, char carater);




#endif //PROJETO_MUDA_ESTADO_H

