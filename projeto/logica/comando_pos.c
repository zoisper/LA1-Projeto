
#include "comando_pos.h"
#include "../dados/obter_dados_estado.h"
#include "../dados/muda_estado.h"
#include "fazer_jogada.h"
#define tamanho 32



int pos_jogada (ESTADO *e, int num)
{
    static JOGADA JOGADAS_aux[tamanho] = {0}, JOGADAS_anterior[tamanho] = {0} ;
    static int k=0;
    if (houve_jogada(*e, JOGADAS_aux))
    {
        if (num<0 || num > obter_num_jogadas(*e))
            return 0;
        k = obter_num_jogadas(*e);
        clona_jogadas(*e,JOGADAS_aux,num);
        clona_jogadas(*e,JOGADAS_anterior,32);
        acede_jogada(e, JOGADAS_aux, num);
        return 1;
    }
    else
        if (num>=0 && num <= k)
        {
            acede_jogada (e, JOGADAS_anterior, num);
            clona_jogadas(*e,JOGADAS_aux,num);
            return 1;
        }
    return 0;

}

void clona_jogadas(ESTADO e, JOGADA jogadas[], int num )
{
    int i;
    for (i=0; i<tamanho; i++)
    {
        jogadas[i].jogador1.coluna = 0;
        jogadas[i].jogador1.linha = 0;
        jogadas[i].jogador2.coluna = 0;
        jogadas[i].jogador2.linha = 0;
    }

    for (i=0; i<num; i++)
    {
        jogadas[i].jogador1.coluna = obter_jogada_jogador_coluna(e,i, 1);
        jogadas[i].jogador1.linha = obter_jogada_jogador_linha(e,i, 1);
        jogadas[i].jogador2.coluna = obter_jogada_jogador_coluna(e,i, 2);
        jogadas[i].jogador2.linha = obter_jogada_jogador_linha(e,i, 2);
    }

}

int houve_jogada (ESTADO e, JOGADA jogadas[])
{
    int i, r;
    r=0;
    for (i=0; i<tamanho; i++)
    {
        if (jogadas[i].jogador1.coluna != obter_jogada_jogador_coluna(e,i, 1))
            r=1;
        if (jogadas[i].jogador1.linha != obter_jogada_jogador_linha(e,i, 1))
            r=1;
        if (jogadas[i].jogador2.coluna != obter_jogada_jogador_coluna(e,i, 2))
            r=1;
        if (jogadas[i].jogador2.linha != obter_jogada_jogador_linha(e,i, 2))
            r=1;
    }

    return r;

}


void acede_jogada (ESTADO *e,  JOGADA jogadas[], int num)
{
    reinicia_estado(e);
    COORDENADA coord;
    int i;
    for (i=0;i<num; i++)
    {
        coord = jogadas[i].jogador1;
        jogar(e, coord);
        coord = jogadas[i].jogador2;
        jogar(e, coord);
    }
}