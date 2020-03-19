//
// Created by tiago on 19/03/20.
//

#include "grava_jogo.h"
#include "../dados/obter_dados.h"

void grava_jogo(ESTADO e,FILE *fp)
{
    int i,j,n;
    for (i=0; i<8; i++)
        for(j=0;j<8;j++)
        {
            if (i == 0 && j == 7 && obter_casa(e,i,j) == VAZIO)
                n = '2';
            else
            if (i == 7 && j == 0 && obter_casa(e,i,j) == VAZIO)
                n = '1';
            else
            {
                if (obter_casa(e,i,j) == VAZIO)
                    n = '.';
                if (obter_casa(e,i,j) == BRANCA)
                    n = '*';
                if (obter_casa(e,i,j) == PRETA)
                    n = '#';
            }
            fprintf(fp,"%c", n);
        }
    fprintf(fp, "%d%d",obter_jogador_atual(e), obter_num_jogadas(e));
    fprintf(fp,"%d%d", obter_ultima_jogada_linha(e), obter_ultima_jogada_coluna(e));
    for(i=0;i<32;i++)
        fprintf(fp,"%d%d%d%d",obter_jogada_jogador_linha(e,i,1), obter_jogada_jogador_coluna(e,i,1), obter_jogada_jogador_linha(e,i,2),obter_jogada_jogador_coluna(e,i,2));

}