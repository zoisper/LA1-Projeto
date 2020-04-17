

#include "gravar_ler_jogo.h"
#include "../dados/obter_dados_estado.h"
#include "../interface/mostra.h"
#include "../dados/muda_estado.h"

void grava_jogo(ESTADO e,FILE *fp)
{
    int i,j;
    char c;
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

    fprintf(fp, "\n");
    mostra_movimentos(e, fp);
}

void ler_jogo (ESTADO *e, FILE *fp)
{
    reinicia_estado(e);
    retoma_tabuleiro(e,fp);
    retoma_movimentos(e,fp);
}