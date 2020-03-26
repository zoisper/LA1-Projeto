//
// Created by tiago on 26/03/20.
//

#include "ler_jogo.h"
#include "../dados/retoma_estado.h"

void ler_jogo (ESTADO *e, FILE *fp)
{
    reinicia_estado(e);
    retoma_tabuleiro(e,fp);
    retoma_movimentos(e,fp);
}