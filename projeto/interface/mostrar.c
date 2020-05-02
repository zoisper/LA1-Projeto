
#include <stdio.h>
#include "../dados/obter_dados_estado.h"
#define BUF_SIZE 1024


void mostrar_tabuleiro (ESTADO e, FILE *fp, int estilo)
{
    int coluna,linha;
    char carater = '\0';
    if (estilo == 1)
        fprintf(fp,"\n");
    for(linha=0; linha<8; linha++)
    {
        if(estilo==1)
            fprintf(fp,"%d ", (8-linha));
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
            if (estilo == 1)
                fprintf(fp," ");

            fprintf(fp,"%c", carater);
        }
        fprintf(fp,"\n");
    }
    if (estilo == 1)
    {
        fprintf(fp,"  ");
        for(coluna=0; coluna<8; coluna++)
            fprintf(fp," %c", ('a'+ coluna ));
        fprintf(fp,"\n");

    }
}


void mostrar_movimentos (ESTADO e,FILE *fp) {
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


