//
// Created by tiago on 19/03/20.
//

#include "retoma_jogo.h"

void retoma_jogo (ESTADO *e, FILE *fp)
{
int i, j, jogador, jogadas;
    char carater;
    COORDENADA coord;
    for (i=0; i<8; i++)
        for(j=0;j<8;j++)
        {
            carater = fgetc(fp);
            retoma_casa(e,i, j,carater);
        
}