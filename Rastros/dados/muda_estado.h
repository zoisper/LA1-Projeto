
/**
@file muda_estado.h
Definição das funçoes que manipulam o estado
*/

#ifndef PROJETO_MUDA_ESTADO_H
#define PROJETO_MUDA_ESTADO_H

#include "inicializa_estado.h"
#include <stdio.h>

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
 * \brief Troca o jogador atual.
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
void incrementa_num_jogadas (ESTADO *e);

/**
 * \brief Reinicia o estado.\n
 * @param e Apontador para estado.\n
 */
void reinicia_estado (ESTADO *e);
/**
 * \brief Lẽ o tabuleiro de um ficheiro.\n
 * @param e Apontador para estado.\n
 * @param fp Apontador para o ficheiro onde o tabuleiro está guardado.
 */
void retoma_tabuleiro (ESTADO *e, FILE *fp);
/**
 * \brief Lẽ os moovimentos de um ficheiro.\n
 * @param e Apontador para estado.\n
 * @param fp Apontador para o ficheiro onde os movimentos estão guardados.
 */
void retoma_movimentos(ESTADO *e, FILE *fp);

/**
 * \brief Altera a casa para o valor que estava gravado no ficheiro lido.
 * @param e Apontador para o estado.\n
 * @param linha A linha do tabuleiro.\n
 * @param coluna A coluna do tabuleiro.\n
 * @param carater O carater que estava gravado no ficheiro.\n
 */
void retoma_casa (ESTADO *e, int linha, int coluna, char carater);


#endif //PROJETO_MUDA_ESTADO_H

