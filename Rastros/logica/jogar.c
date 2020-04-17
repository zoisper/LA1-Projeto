

#include "jogar.h"
#include "../dados/obter_dados_estado.h"
#include "../dados/muda_estado.h"


int jogar(ESTADO *e, COORDENADA c)
{

    //printf("jogar %d %d\n", c.coluna, c.linha);
    if (valida_jogada(*e, c) == 1)
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

int valida_jogada(ESTADO e, COORDENADA c) // verifica se as cordenandas jogadas sao adjacentes a ultima jogada e se a casa ta vazia
{
    if      (
                    (obter_casa(e, c.linha, c.coluna) == VAZIO) &&
                            (
                            (obter_ultima_jogada_linha(e) == c.linha && obter_ultima_jogada_coluna(e) - c.coluna == 1) ||
                            (obter_ultima_jogada_linha(e) == c.linha && obter_ultima_jogada_coluna(e) - c.coluna == -1) ||
                            (obter_ultima_jogada_coluna(e) == c.coluna && obter_ultima_jogada_linha(e) - c.linha == 1) ||
                            (obter_ultima_jogada_coluna(e) == c.coluna && obter_ultima_jogada_linha(e) - c.linha == -1) ||
                            (obter_ultima_jogada_coluna(e) - c.coluna == 1 && obter_ultima_jogada_linha(e) - c.linha == -1) ||
                            (obter_ultima_jogada_coluna(e) - c.coluna == -1 && obter_ultima_jogada_linha(e) - c.linha == 1) ||
                            (obter_ultima_jogada_coluna(e) - c.coluna == 1 && obter_ultima_jogada_linha(e) - c.linha == 1) ||
                            (obter_ultima_jogada_coluna(e) - c.coluna == -1 && obter_ultima_jogada_linha(e) - c.linha == -1)
                            )

            )

        return 1;

    else
        return 0;
}

int verifica_vencedor (ESTADO e) // verifica se alguem ganhou
{
    int c = obter_ultima_jogada_coluna(e);
    int l = obter_ultima_jogada_linha(e);

    if (obter_casa(e, 0, 7)== BRANCA)
        return 2;
    else
    if (obter_casa(e, 7, 0)== BRANCA)
        return 1;

    else
    if (
            (obter_casa(e,l+1,c)!= VAZIO || l+1 > 7) &&
            (obter_casa(e,l-1,c)!= VAZIO || l-1 < 0) &&
            (obter_casa(e,l,c+1)!= VAZIO || c+1 > 7)  &&
            (obter_casa(e,l,c-1)!= VAZIO || c-1 < 0)  &&
            (obter_casa(e,l+1,c+1)!= VAZIO || c+1 > 7 || l+1 > 7) &&
            (obter_casa(e,l-1,c-1)!= VAZIO || l-1 < 0 || c-1 < 7 ) &&
            (obter_casa(e,l+1,c-1)!= VAZIO ||l+1 > 7 || c-1 < 0)  &&
            (obter_casa(e,l-1,c+1)!= VAZIO || l-1 < 0 || c+1 > 7 )
            )
        return (obter_jogador_atual(e) == 1) ? 2 : 1;
    return 0;
}

