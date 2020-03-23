//
// Created by tiago on 19/03/20.
//

#include "retoma_jogo.h"
#include "../dados/muda_dados.h"
#include "../dados/obter_dados.h"

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
            if(carater == '\n')
              j-- ;


        }

    jogador = fgetc(fp) - '0';
    jogadas = fgetc(fp) - '0';
    muda_num_jogadas(e,0);
    muda_jogador_atual(e, 1);
    for (i=0; i<32; i++)
        {
            coord.linha = '8' - fgetc(fp) ;
            coord.coluna = fgetc(fp) - 'a';
            muda_jogadas(e,coord);
            incrementa_jogador_atual(e);
            coord.linha = '8' - fgetc(fp) ;
            coord.coluna = fgetc(fp) - 'a';
            muda_jogadas(e,coord);
            incrementa_jogador_atual(e);
            incrementa_num_jogadas(e);

        }
    coord.linha = '8' - fgetc(fp) ;
    coord.coluna = fgetc(fp) - 'a';
    muda_ultima_jogada(e, coord);
    muda_num_jogadas(e, jogadas);
    muda_jogador_atual(e, jogador);
}
