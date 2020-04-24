

#include "prompt.h"
#include <stdio.h>
#include "../dados/obter_dados_estado.h"


void prompt (ESTADO e, int controlo)
{
    static int  num_comandos = 0;
    if (controlo == 1)
        num_comandos++;
    printf("# %d PL%d (%d)> ", num_comandos, obter_jogador_atual(e), obter_num_jogadas(e));

}