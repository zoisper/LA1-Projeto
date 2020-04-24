

#include "fazer_jogada.h"
#include "../dados/obter_dados_estado.h"
#include "../dados/muda_estado.h"


int jogar(ESTADO *e, COORDENADA c)
{

    if (validar_jogada(*e, c) == 1)
    {
        muda_casa(e, c);
        muda_jogadas(e, c);
        if (obter_jogador_atual(*e) == 2)
            incrementa_num_jogadas(e);
        muda_jogador_atual(e);
        muda_ultima_jogada(e, c);


        return 1;

    }
    return 0;
}

int validar_jogada(ESTADO e, COORDENADA coord)
{

    int ultima_coluna = obter_ultima_jogada_coluna(e);
    int ultima_linha = obter_ultima_jogada_linha(e);
    int controlo = 0;
    if ((obter_casa(e, coord.linha,coord.coluna) == VAZIO) && coord.linha >= 0 && coord.linha < 8 && coord.coluna >= 0 && coord.linha < 8)
        for(int l = ultima_linha-1; l <= ultima_linha +1; l++)
            for(int c = ultima_coluna-1; c <= ultima_coluna+1; c++)
                if (coord.linha == l && coord.coluna == c)
                    controlo = 1;
    return controlo;

}

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

