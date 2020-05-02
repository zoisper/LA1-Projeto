
/**
@file jogar.h
As funções que adicionam uma jogada.
*/
#ifndef PROJETO_JOGAR_H
#define PROJETO_JOGAR_H
#include "inicializar_estado.h"
/**
 * \brief Coloca, se a jogada for valida, uma peça branca na coordendada escolhida e uma peça preta na ultima jogada.
 * @param estado Apontador para estado.\n
 * @param coord A coordenada onde queremos jogar.\n
 * @return 1 se a jogada for possivel e 0 caso não seja possivel jogar.
 */
int jogar(ESTADO *e, COORDENADA c);
/**
 * \brief Verifica se uma jogada é valida.
 * @param e Apontador para o estado.\n
 * @param coord A coordenada onde queremos jogar.\n
 * @return 1 se a jogada for valida e 0 se não for.
 */
int valida_jogada(ESTADO e, COORDENADA coord);
/**
 * \brief Verifica se algum jogador venceu o jogo.
 * @param e O valor do estado.
 * @return Retorna 0 se nao houver vencedor ou retorna o número (1 ou 2) do jogador que venceu.
 */
int verificar_vencedor (ESTADO e);


#endif //PROJETO_JOGAR_H
