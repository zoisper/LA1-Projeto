//
// Created by tiago on 09/03/20.
//

#include "jogar.h"
#include <stdio.h>
#include "../dados/obter_dados.h"


int jogar(ESTADO *e, COORDENADA c)
{

    printf("jogar %d %d\n", c.coluna, c.linha);
    if (valida_jogada(*e, c) == 1)
    {
        muda_casa(e, c);
        muda_jogadas(e, c);
        if (obter_jogador_atual(*e) == 2)
            muda_num_jogadas(e);
        muda_jogador_atual(e);
        muda_ultima_jogada(e, c);
        verifica_vencedor(*e);

        return 1;

    }
    return 0;
}

int valida_jogada(ESTADO e, COORDENADA c) // verifica se as cordenandas jogadas sao adjacentes a ultima jogada e se a casa ta vazia
{
    int t = 0;
    if      (
                    (obter_casa(e, c.linha, c.coluna) == VAZIO) &&
                    ((obter_ultima_jogada_linha(e) == c.linha && obter_ultima_jogada_coluna(e) - c.coluna == 1) ||
                    (obter_ultima_jogada_linha(e) == c.linha && obter_ultima_jogada_coluna(e) - c.coluna == -1) ||
                    (obter_ultima_jogada_coluna(e) == c.coluna && obter_ultima_jogada_linha(e) - c.linha == 1) ||
                    (obter_ultima_jogada_coluna(e) == c.coluna && obter_ultima_jogada_linha(e) - c.linha == -1) ||
                    (obter_ultima_jogada_coluna(e) - c.coluna == 1 && obter_ultima_jogada_linha(e) - c.linha == -1) ||
                    (obter_ultima_jogada_coluna(e) - c.coluna == -1 && obter_ultima_jogada_linha(e) - c.linha == 1) ||
                    (obter_ultima_jogada_coluna(e) - c.coluna == 1 && obter_ultima_jogada_linha(e) - c.linha == 1) ||
                    (obter_ultima_jogada_coluna(e) - c.coluna == -1 && obter_ultima_jogada_linha(e) - c.linha == -1))

            )

        return 1;

    else
        return 0;
}

