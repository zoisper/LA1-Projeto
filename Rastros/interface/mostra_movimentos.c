

#include <printf.h>
#include "mostra_movimentos.h"
#include "../dados/obter_dados.h"
#include <stdio.h>

void mostra_movimentos (ESTADO e,FILE *fp) {
    int i, c1,c2,l1,l2;
    char mov, dezenas, unidades;
    for (i=0; i <=obter_num_jogadas(e); i++)
    {
        c1 = obter_jogada_jogador_coluna(e,i,1);
        c2 = obter_jogada_jogador_coluna(e,i,2);
        l1 = obter_jogada_jogador_linha(e,i,1);
        l2 = obter_jogada_jogador_linha(e,i,2);
        dezenas = '0' + i/10;
        unidades = '1' + i%10;


        if((c1 != 0 || l1 != 0)  && (c1 != 4|| l1 != 3))
        {

            fprintf(fp,"%c%c: ", dezenas, unidades);
            mov = 'a' + obter_jogada_jogador_coluna(e, i, 1);
            fprintf(fp,"%c", mov);
            mov = '8' - obter_jogada_jogador_linha(e, i, 1);
            fprintf(fp,"%c ", mov);
        }
        if((c2 != 0 || l2 != 0)  && (c2 != 4|| l2 != 3))
        {
            mov = 'a' + obter_jogada_jogador_coluna(e, i, 2);
            fprintf(fp,"%c", mov);
            mov = '8' - obter_jogada_jogador_linha(e, i, 2);
            fprintf(fp,"%c", mov);
            fprintf(fp,"\n");

        }
    }
    if (obter_jogador_atual(e) == 2)
        fprintf(fp,"\n");
}

