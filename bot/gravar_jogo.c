
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

    fprintf(fp, "\n");

}
void imprime_movimentos (ESTADO e,FILE *fp) {
    int i, c1,c2,l1,l2;
    char mov, dezenas, unidades;
    for (i=0; i <=obter_num_jogadas(e); i++)
    {
        c1 = obter_jogada_jogador_coluna(e,i,1);
        c2 = obter_jogada_jogador_coluna(e,i,2);
        l1 = obter_jogada_jogador_linha(e,i,1);
        l2 = obter_jogada_jogador_linha(e,i,2);
        dezenas = '0' + i/10;
        unidades = '1' + i%10;


        if((c1 != 0 || l1 != 0)  && (c1 != 4|| l1 != 3))
        {

            fprintf(fp,"%c%c: ", dezenas, unidades);
            mov = 'a' + obter_jogada_jogador_coluna(e, i, 1);
            fprintf(fp,"%c", mov);
            mov = '8' - obter_jogada_jogador_linha(e, i, 1);
            fprintf(fp,"%c ", mov);
        }
        if((c2 != 0 || l2 != 0)  && (c2 != 4|| l2 != 3))
        {
            mov = 'a' + obter_jogada_jogador_coluna(e, i, 2);
            fprintf(fp,"%c", mov);
            mov = '8' - obter_jogada_jogador_linha(e, i, 2);
            fprintf(fp,"%c", mov);
            fprintf(fp,"\n");

        }
    }
    if (obter_jogador_atual(e) == 2)
        fprintf(fp,"\n");
}


