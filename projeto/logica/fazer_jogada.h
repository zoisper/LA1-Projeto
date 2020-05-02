
/**
@file fazer_jogada.h
As funções que adicionam uma jogada valida e verificam se ha vencedor.
*/
#ifndef PROJETO_FAZER_JOGADA_H
#define PROJETO_FAZER_JOGADA_H
#include "../dados/inicializar_estado.h"
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
int validar_jogada(ESTADO e, COORDENADA coord);



#endif //PROJETO_FAZER_JOGADA_H
