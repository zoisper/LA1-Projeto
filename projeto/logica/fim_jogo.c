
/**
@file fim_jogo.c
Função que deteta o fim do jogo.
*/
#include "fim_jogo.h"
int verificar_vencedor (ESTADO e)
{
    int ultima_coluna = obter_ultima_jogada_coluna(e);
    int ultima_linha = obter_ultima_jogada_linha(e);
    int controlo = (obter_jogador_atual(e) == 1) ? 2 : 1;

    if (obter_casa(e, 0, 7)== BRANCA)
        return 2;

    if (obter_casa(e, 7, 0)== BRANCA)
        return 1;

    for(int l = ultima_linha-1; l <= ultima_linha +1; l++)
        for(int c = ultima_coluna-1; c <= ultima_coluna+1; c++)
            if ((obter_casa(e, l,c) == VAZIO) && l >= 0 && l < 8 && c >= 0 && c < 8)
                controlo = 0;

    return controlo;
}