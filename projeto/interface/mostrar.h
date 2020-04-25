

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
 * @param e O estado.\n
 * @param fp O eficheiro onde o tabuleiro vai ser imprimido.\n
 * @param grelha Parametro que controla se anumeraçao das colunas e linhas são imprimidos.
 */
void mostrar_tabuleiro (ESTADO e, FILE *fp, int grelha);

/**
 * Função que vai mostrar todos os movimentos realizados pelos jogadores num ficheiro passado por parametro.\n
 * @param e Apontador para o estado.\n
 * @param fp Apontador para o ficheiro.
 */
void mostrar_movimentos (ESTADO e,FILE *fp);
/**
 * \brief Prompt com o número de comandos, o jogador atual e o número da jogada.
 * @param e O estado.\n
 * @param controlo Variavel que vai indicar se o nummero de comandos do prompt incrementa ou nao.
 */
void prompt (ESTADO e, int controlo);

/**
 * Função que mostra o vencedor do jogo.\n
 * @param vencedor O numero (1 ou 2) do jogador que venceu.
 */
void mostrar_vencedor (int vencedor);


#endif //PROJETO_MOSTRAR_H
