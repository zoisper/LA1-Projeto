//
// Created by tiago on 08/03/20.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "interface.h"
#include "logica.h"
#define BUF_SIZE 1024

void mostrar_tabuleiro(ESTADO e)
{
    int i, j, l;
    char c, n;
    l = 8;
    c = 'a';
        for (i = 0; i < 8; i++)
        {
            printf("\n");
            if (l < 10)
                printf(" %d ", l--);
                else
                    printf("%d ", l--);
                for (j = 0; j < 8; j++)
                {
                    if (i == 0 && j == 7 && obter_casa(e,i,j) == VAZIO)
                        n = '2';
                    else if
                        (i == 7 && j == 0 && obter_casa(e,i,j) == VAZIO)
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
                        printf(" %c", n);
                }
        }
        printf("\n X ");
        for (i = 0; i < 8; i++)
            printf(" %c", c++);
        printf("\n");
}

int interpretador(ESTADO *e)
{
    char linha[BUF_SIZE];
    char col[2], lin[2];

    if(fgets(linha, BUF_SIZE, stdin) == NULL)
        return 0;
    if(strlen(linha) == 2 && linha[0]=='Q')
        exit(0);
    if(strlen(linha) == 3 && sscanf(linha, "%[a-h]%[1-8]", col, lin) == 2)
    {
        COORDENADA coord = {*col - 'a', '8' - *lin  };
        int controlo = jogar(e, coord); // controlo serve para o prompt saber se deve incrementar o numero de comandos
        mostrar_tabuleiro(*e);
        return controlo;
    }
        return 0;
}

void prompt (ESTADO e, int controlo)
{
    int static num_comandos = 0;
    if (controlo == 1)
        num_comandos++;
    printf("# %d PL%d (%d)> ", num_comandos, obter_jogador_atual(e), obter_num_jogadas(e));
}