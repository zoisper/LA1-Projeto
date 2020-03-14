//
// Created by tiago on 08/03/20.
//

#include "interface.h"
#include <stdio.h>
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
                    if (i == 0 && j == 7)
                        n = '2';
                    else if
                        (i == 7 && j == 0)
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
