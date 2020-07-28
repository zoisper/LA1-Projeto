
#include <stdio.h>
#include "obter_dados_estado.h"
#define BUF_SIZE 1024

void imprime_tabuleiro(ESTADO e,FILE *fp)
{
    int i,j;
    char c='\0';
    for (i=0; i<8; i++)
    {
        for(j=0;j<8;j++)
        {
            if (i == 0 && j == 7 && obter_casa(e,i,j) == VAZIO)
                c = '2';
            else
            if (i == 7 && j == 0 && obter_casa(e,i,j) == VAZIO)
                c = '1';
            else
            {
                if (obter_casa(e,i,j) == VAZIO)
                    c = '.';
                if (obter_casa(e,i,j) == BRANCA)
                    c = '*';
                if (obter_casa(e,i,j) == PRETA)
                    c = '#';
            }
            fprintf(fp,"%c", c);
        }
        fprintf(fp,"\n");
    }
    

}
void imprime_movimentos (ESTADO e,FILE *fp) {
    int i, linha, coluna, num=1, jogador, num_jogadas, jogada;
    char mov ;
    num_jogadas = obter_num_jogadas(e)*2 + obter_jogador_atual(e) -1;
    jogada=0;

    for (i=0, jogador = 1; i <num_jogadas; i++)
    {
        coluna = obter_jogada_jogador_coluna(e,jogada,jogador);
        linha = obter_jogada_jogador_linha(e,jogada,jogador);

        if (jogador == 2)
            jogada++;

        if((coluna != 4|| linha != 3))
        {
            if (jogador == 1)
                fprintf(fp,"%02d: ", num++);
            else
                fprintf(fp," ");
            mov = 'a' + coluna;
            fprintf(fp,"%c", mov);
            mov = '8' - linha ;
            fprintf(fp,"%c", mov);

            if (jogador == 2)
                fprintf(fp,"\n");
        }
        jogador = (jogador ==1)? 2 : 1;
    }
    if (obter_jogador_atual(e) == 2)
        fprintf(fp,"\n");

}


