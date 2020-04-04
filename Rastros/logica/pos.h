
/**
@file pos.h
Funçãoes que vao realizar o comando pos
*/
#ifndef PROJETO_POS_H
#define PROJETO_POS_H

#include "../dados/inicializa_estado.h"

/**
 * \brief Função que coloca o jogo numa jogada anterior passada por parametro.
 * @param e Apontador para estado.\n
 * @param num O numero da jogada.\n
 * @return 1 se o numero da jogada for valida e 0 se for invalida.
 */
int pos_jogada (ESTADO *e, int num);
/**
 * \brief Função auxliar que reinica o estado, e chama a funçao jogar com as 'num' coordenadas armazenadas num array auxiliar  \n.
 * @param e Apontador para estado.\n
 * @param jogadas Array auxiliar .\n
 * @param num O numero da jogada.
 */
void acede_jogada (ESTADO *e, JOGADA jogadas[], int num);
/**
* \brief Função auxliar que copia 'num' jogadas realizadas para um array auxiliar \n.
* @param e Apontador para estado.\n
* @param jogadas Array auxiliar .\n
* @param num O numero da jogada.
*/
void clona_jogadas(ESTADO e, JOGADA jogadas[], int num );
/**
* \brief Função auxliar que compara as jogadas realizadas com as jogadas armazenadas num array auxiliar\n.
* @param e Apontador para estado.\n
* @param jogadas Array auxiliar .\n
*/
int houve_jogada (ESTADO e, JOGADA jogadas[]);
#endif //PROJETO_POS_H
