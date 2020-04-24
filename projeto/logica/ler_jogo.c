

#include "ler_jogo.h"
#include "../dados/obter_dados_estado.h"
#include "../dados/muda_estado.h"


void ler_jogo (ESTADO *e, FILE *fp)
{
    int i,j;
    char carater;
    COORDENADA coord = {0,0};

    for (i = 0; i < 8; i++)
        for (j = 0; j < 8; j++)
        {
            carater = fgetc(fp);
            retoma_casa(e, i, j, carater);
            if (carater == '\n')
                j--;
        }

    while ((carater = fgetc(fp)) != EOF)
    {
        if (carater >= 'a' && carater <= 'h')
        {
            coord.coluna = (carater - 'a');
            carater = fgetc(fp);
            coord.linha = ('8' - carater );
            muda_jogadas(e, coord);
            muda_ultima_jogada(e, coord);
            if (obter_jogador_atual(*e) == 2)
                incrementa_num_jogadas(e);
            muda_jogador_atual(e);
        }
    }
}
