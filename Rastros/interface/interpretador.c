//
// Created by tiago on 19/03/20.
//

#include "interpretador.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "mostra_tabuleiro.h"
#include "../logica/jogar.h"
#include "../dados/obter_dados.h"
#include "grava_jogo.h"
#include "retoma_jogo.h"

#define BUF_SIZE 1024


int interpretador(ESTADO *e)
{
    char linha[BUF_SIZE];
    char col[2], lin[2];
    char save[3], load[4], nome_ficheiro[BUF_SIZE];
    FILE *fp;

    if(fgets(linha, BUF_SIZE, stdin) == NULL)
        return 0;
    if(strlen(linha) == 2 && linha[0]=='Q')
        exit(0);
    if(sscanf(linha, "%s %s", save, nome_ficheiro) == 2 && strncmp(save, "gr", 2) == 0)
    {
        fp = fopen (nome_ficheiro,"w");
        grava_jogo (*e, fp);
        fclose(fp);
        printf ("Jogo Gravado\n");
    }
    if(sscanf(linha, "%s %s", load, nome_ficheiro) == 2 && strncmp(load, "gr", 3) == 0)
    {
        fp = fopen (load,"r");
        retoma_jogo (e, fp);
        fclose(fp);
    }
    if(strlen(linha) == 3 && sscanf(linha, "%[a-h]%[1-8]", col, lin) == 2)
    {
        COORDENADA coord = {*col - 'a', '8' - *lin  };
        int controlo = jogar(e, coord); // controlo serve para o prompt saber se deve incrementar o numero de comandos
        mostrar_tabuleiro(*e);
        return controlo;
    }
    return 0;
}