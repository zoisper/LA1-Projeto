
#include "interpretador.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "mostrar.h"
#include "../logica/fazer_jogada.h"
#include "../logica/ler_jogo.h"
#include "../logica/comando_pos.h"
#include "../logica/comando_jog.h"



#define BUF_SIZE 1024


int interpretador(ESTADO *e)
{
    int  controlo, num;
    char linha[BUF_SIZE];
    char col[2], lin[2], pos_num[3];
    char save[3], load[4], pos[4], nome_ficheiro[BUF_SIZE];
    FILE *fp;
    COORDENADA coord;

    if(fgets(linha, BUF_SIZE, stdin) == NULL)
        return 0;

    if(strlen(linha) == 2 && linha[0]=='Q')
        return 2;

    else if(sscanf(linha, "%s %s", save, nome_ficheiro) == 2 && strlen(save) == 2 && strncmp(save, "gr", 2) == 0)
    {
        fp = fopen (nome_ficheiro,"w");
        mostrar_tabuleiro(*e, fp,0);
        fprintf(fp,"\n");
        mostrar_movimentos(*e,fp);
        fclose(fp);
        printf ("Jogo gravado\n");
        return 1;

    }

    else if(strlen (linha) == 5 && strncmp(linha, "movs",4) == 0)
    {
        printf("\n");
        mostrar_movimentos(*e, stdout);
        return 1;
    }


    else if(sscanf(linha, "%s %s", load, nome_ficheiro) == 2 && strlen(load) == 3 && strncmp(load, "ler", 3) == 0)
    {
        fp = fopen (nome_ficheiro,"r");
        if (fp)
        {
            ler_jogo (e, fp);
            fclose(fp);
            printf ("Jogo retomado\n");
            return 1;
        }
        printf ("Ficheiro não encontrado\n");
        return 0;
    }
    else if((strlen (linha)== 6 || strlen(linha) == 7)  && sscanf(linha, "%s %[0-9]",pos, pos_num) == 2 && strncmp(pos, "pos",3) == 0)
    {
        num = atoi(pos_num);
        controlo = pos_jogada(e, num);
        return controlo;
    }

    else if(strlen (linha) == 4 && strncmp(linha, "jog",3) == 0)
    {
        coord = jog_random (*e);
        controlo = jogar(e,coord);
        return controlo;
    }

    else if(strlen (linha) == 5 && strncmp(linha, "jog2",4) == 0)
    {
        coord = jog_minimax(*e, 6);
        controlo = jogar(e,coord);
        return controlo;
    }

    else if(strlen(linha) == 3 && sscanf(linha, "%[a-h]%[1-8]", col, lin) == 2)
    {

        coord.coluna = (*col - 'a');
        coord.linha = ('8' - *lin);
        controlo = jogar(e, coord);
        if (controlo == 0)
            printf("Jogada invalida");
        return controlo;
    }

    else
    {
        printf ("Comando invalido\n");
        return 0;
    }
}
