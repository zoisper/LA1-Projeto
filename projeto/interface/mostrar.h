

/**
@file mostrar.h
As funçoes responsavies por mostrar o tabuleiro, movimentos, prompt e vencedor.
*/
#ifndef PROJETO_MOSTRAR_H
#define PROJETO_MOSTRAR_H
#include <stdio.h>
#include "../dados/inicializar_estado.h"

/**
 * \brief Imprime o tabuleiro do jogo num ficheiro passado por parametro.\n
 * @param e O valor do estado.\n
 * @param fp Apontador para o ficheiro onde o tabuleiro vai ser imprimido.\n
 * @param estilo Parametro que controla se a numeraçao das colunas e linhas e o espaçamento entre colunas são imprimidos.
 */
void mostrar_tabuleiro (ESTADO e, FILE *fp, int estilo);

/**
 * Função que vai mostrar todos os movimentos realizados pelos jogadores num ficheiro passado por parametro.\n
 * @param e O valor do  estado.\n
 * @param fp Apontador para o ficheiro.
 */
void mostrar_movimentos (ESTADO e,FILE *fp);
/**
 * \brief Prompt com o número de comandos realizados até ao momento, o jogador atual e o número da jogada atual.\n
 * @param e O valor do estado.\n
 * @param controlo Variavel que controla o incremento do numero de comandos realizados ate ao momento prompt.
 */
void prompt (ESTADO e, int controlo);

/**
 * Função que mostra o vencedor do jogo.\n
 * @param vencedor O numero do jogador que venceu.
 */
void mostrar_vencedor (int vencedor);


#endif //PROJETO_MOSTRAR_H
