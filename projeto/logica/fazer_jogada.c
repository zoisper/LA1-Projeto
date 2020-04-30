

#include "fazer_jogada.h"
#include "../dados/obter_dados_estado.h"
#include "../dados/mudar_estado.h"


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



