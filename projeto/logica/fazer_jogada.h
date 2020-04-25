
/**
@file fazer_jogada.h
As funções que adicionam uma jogada.
*/
#ifndef PROJETO_FAZER_JOGADA_H
#define PROJETO_FAZER_JOGADA_H
#include "../dados/inicializar_estado.h"
/**
 * \brief Coloca, se a jogada for valida, uma peça branca na coordendada jogada e uma peça preta na ultima jogada.\nVerfifica se algum jogador venceu o jogo.
 * @param estado Apontador para estado.\n
 * @param c A coordendad.\n
 * @return 1 se a jogada for possivel e 0 caso não seja possivel jogar.
 */
int jogar(ESTADO *e, COORDENADA c);
/**
 * \brief Verifica se uma jogada é valida.
 * @param e O Estado.\n
 * @param coord A coordenada.\n
 * @return 1 se a jogada for valida e 0 se não for.
 */
int validar_jogada(ESTADO e, COORDENADA coord);
/**
 * \brief Verifica se algum jogador venceu o jogo.
 * @param e O estado.
 * @return Retorna 0 se nao houver vencedor ou retorna 1 ou 2 consoante o jogador que venceu.
 */
int verificar_vencedor (ESTADO e);


#endif //PROJETO_FAZER_JOGADA_H
