//
// Created by tiago on 29/03/20.
//

#ifndef PROJETO_POS_H
#define PROJETO_POS_H

#include "../dados/inicializa_estado.h"
int pos_jogada (ESTADO *e, int num);
void acede_jogada (ESTADO *e, JOGADA jogadas[], int num);
void clona_jogadas(ESTADO e, JOGADA jogadas[], int n );
int houve_jogada (ESTADO e, JOGADA jogadas[]);
#endif //PROJETO_POS_H
