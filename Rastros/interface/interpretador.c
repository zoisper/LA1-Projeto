
#include "interpretador.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "mostra_tabuleiro.h"
#include "../logica/jogar.h"
#include "../logica/grava_jogo.h"
#include "mostra_movimentos.h"
#include "../logica/ler_jogo.h"
#include "../logica/pos.h"
#include "../logica/jog.h"



#define BUF_SIZE 1024


int interpretador(ESTADO *e)
{
    int num, controlo, vencedor;
    char linha[BUF_SIZE];
    char col[2], lin[2];
    char save[3], load[4], pos[4], nome_ficheiro[BUF_SIZE];
    FILE *fp;
    COORDENADA coord;

    if(fgets(linha, BUF_SIZE, stdin) == NULL)
        return 0;

    if(strlen(linha) == 2 && linha[0]=='Q')
        exit(0);

    else if(sscanf(linha, "%s %s", save, nome_ficheiro) == 2 && strlen(save) == 2 && strncmp(save, "gr", 2) == 0)
    {
        fp = fopen (nome_ficheiro,"w");
        grava_jogo(*e, fp);
        fclose(fp);
        printf ("Jogo Gravado\n");
        return 1;

    }

    else if(strlen (linha) == 5 && strncmp(linha, "movs",4) == 0)
    {
        mostra_movimentos(*e, stdout);
        return 1;
    }

    

    else if(sscanf(linha, "%s %s", load, nome_ficheiro) == 2 && strlen(load) == 3 && strncmp(load, "ler", 3) == 0)
    {
        fp = fopen (nome_ficheiro,"r");
        if (fp)
        {
            ler_jogo (e, fp);
            fclose(fp);
            mostrar_tabuleiro(*e);
            printf ("Jogo Retomado\n");
            return 1;
        }
        return 0;
    }
    else if(strlen (linha) == 6 && sscanf(linha, "%s %d",pos, &num )&& strncmp(pos, "pos",3) == 0)
    {
        controlo = pos_jogada(e, num);
        mostrar_tabuleiro(*e);
        return controlo;
    }

    else if(strlen (linha) == 4 && strncmp(linha, "jog",3) == 0)
    {
        coord = jog_random(*e);
        controlo = jogar(e,coord);
        mostrar_tabuleiro(*e);
        vencedor = verifica_vencedor(*e);
        if (vencedor != 0)
        {
            printf ("Parabens Jogador %d! \nVenceu o jogo!", vencedor);
            return 2;
        }

        return controlo;
    }


    else if(strlen(linha) == 3 && sscanf(linha, "%[a-h]%[1-8]", col, lin) == 2)
    {
        coord.coluna = (*col - 'a');
        coord.linha = ('8' - *lin);
        controlo = jogar(e, coord);
        if (controlo == 0)
            printf("Jogada Invalida");
        mostrar_tabuleiro(*e);
        vencedor = verifica_vencedor(*e);
        if (vencedor != 0)
        {
            printf ("Parabens Jogador %d! \nVenceu o jogo!", vencedor);
            return 2;
        }
        return controlo;
    }
    return 0;
}