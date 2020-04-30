
/**
@file comando_pos.h
Funçãoes que vao realizar o comando pos
*/
#ifndef PROJETO_COMANDO_POS_H
#define PROJETO_COMANDO_POS_H

#include "../dados/inicializar_estado.h"

/**
 * \brief Função que permite aceder a uma jogada anterior.\n
 * @param e Apontador para estado.\n
 * @param num O numero da jogada que queremos aceder.\n
 * @return 1 se for possivel aceder e 0 se não for possivel.
 */
int pos_jogada (ESTADO *e, int num);
/**
 * \brief Função que reinica o estado do jogo, e chama a funçao jogar com as 'num' coordenadas armazenadas num array auxiliar .\n
 * @param e Apontador para estado.\n
 * @param jogadas Array auxiliar .\n
 * @param num O numero da jogada.
 */
void aceder_jogada (ESTADO *e, JOGADA jogadas[], int num);
/**
* \brief Função que copia 'num' jogadas realizadas para um array auxiliar \n.
* @param e Apontador para estado.\n
* @param jogadas Array auxiliar .\n
* @param num O numero da jogada.
*/
void clonar_jogadas(ESTADO e, JOGADA jogadas[], int num );
/**
* \brief Função que compara as jogadas realizadas com as jogadas armazenadas num array auxiliar.\n.
* @param e O valor do estado.\n
* @param jogadas Array auxiliar .\n
* @return 1 se forem difrentes e 0 se forem iguais.
*/
int houve_jogada (ESTADO e, JOGADA jogadas[]);
#endif //PROJETO_COMANDO_POS_H
