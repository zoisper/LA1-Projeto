
#include "testa_jogar.h"
#include "../logica/fazer_jogada.h"
#include <assert.h>

void testa_jogar (ESTADO e)
{
    int i;
    COORDENADA coord = {1,2};
    for (i=0; i<10;i++)
        jogar(&e,coord);
    assert(e.num_jogadas==0);
    coord.coluna = 4;
    coord.linha = 4;
    for (i=0; i<10;i++)
        jogar(&e,coord);
    assert(e.num_jogadas==0);
    coord.coluna = 4;
    coord.linha = 5;
    for (i=0; i<10;i++)
        jogar(&e,coord);
    assert(e.num_jogadas==1);

}
