
#include <stdio.h>
#include "../dados/obter_dados_estado.h"
#define BUF_SIZE 1024


void mostrar_tabuleiro (ESTADO e, FILE *fp, int grelha)
{
    int coluna,linha;
    char carater = '\0';
    if (grelha == 1)
        fprintf(fp,"\n");
    for(linha=0; linha<8; linha++)
    {
        if(grelha==1)
            fprintf(fp," %d ", (8-linha));
        for(coluna=0; coluna<8;coluna++)
        {
            if (linha == 0 && coluna == 7 && obter_casa(e,linha,coluna) == VAZIO)
                carater = '2';
            else if
                    (coluna == 0 && linha == 7 && obter_casa(e,linha,coluna) == VAZIO)
                carater = '1';
            else
            {
                if (obter_casa(e,linha,coluna) == VAZIO)
                    carater = '.';
                if (obter_casa(e,linha,coluna) == BRANCA)
                    carater = '*';
                if (obter_casa(e,linha,coluna) == PRETA)
                    carater = '#';
            }
            if (grelha == 1)
                fprintf(fp," ");

            fprintf(fp,"%c", carater);
        }
        fprintf(fp,"\n");
    }
    if (grelha == 1)
    {
        fprintf(fp,"   ");
        for(coluna=0; coluna<8; coluna++)
            fprintf(fp," %c", ('a'+ coluna ));
        fprintf(fp,"\n");

    }
}


void mostrar_movimentos (ESTADO e,FILE *fp) {
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

void prompt (ESTADO e, int controlo)
{
    static int  num_comandos = 0;
    if (controlo == 1)
        num_comandos++;
    printf("# %d PL%d (%d)> ", num_comandos, obter_jogador_atual(e), obter_num_jogadas(e));

}

void mostrar_vencedor (int vencedor)
{
    printf ("Parabens Jogador %d! \nVenceu o jogo!", vencedor);

}


