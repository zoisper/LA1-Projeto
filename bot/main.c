#include <stdio.h>
#include "inicializar_estado.h"
#include "ler_jogo.h"
#include "escolher_jogada.h"
#include "jogar.h"
#include "gravar_jogo.h"


int main(int argc, char *argv[] )
{
    ESTADO *e;
    FILE *fp;
    COORDENADA coord = {0,0};
    e = inicializar_estado();
    if (argc == 3)
    {
        fp = fopen(argv[1], "r");
        if(!fp)
        {
            coord = jog_minimax(*e, 6);
            jogar(e,coord);
            fp = fopen(argv[1], "w");
            imprime_tabuleiro(*e, fp);
            fprintf(fp,"\n");
            imprime_movimentos(*e,fp);
            fclose(fp);
            return 0;
        }

        ler_jogo(e, fp);
        fclose(fp);
        coord = jog_minimax(*e, 6);
        jogar(e,coord);

        fp = fopen(argv[2], "w");
        imprime_tabuleiro(*e, fp);
        fprintf(fp,"\n");
        imprime_movimentos(*e,fp);
        fclose(fp);

    }
    return 0;
}
