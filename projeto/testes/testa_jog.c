
#include <assert.h>
#include "testa_jog.h"
#include "../logica/fazer_jogada.h"
#include "../logica/comando_jog.h"
#include "../dados/obter_dados_estado.h"
#include "../dados/muda_estado.h"

void testa_jog(ESTADO e)
{
    COORDENADA coord = {5,4};
    jogar(&e, coord);
    coord.coluna = 6;
    coord.linha = 5;
    jogar(&e, coord);
    coord.coluna = 6;
    coord.linha = 6;
    jogar(&e, coord);
    coord.coluna = 6;
    coord.linha = 7;
    jogar(&e, coord);
    coord.coluna = 7;
    coord.linha = 7;
    jogar(&e, coord);
    coord = jog_random(e);
    jogar(&e, coord);
    assert (obter_num_jogadas(e) == 3);
    assert(obter_ultima_jogada_linha(e) == 6 && obter_ultima_jogada_coluna(e) == 7);
    reinicia_estado(&e);

    coord = jog_random(e);
    jogar(&e, coord);
    assert (obter_num_jogadas(e) == 0);
    coord = jog_random(e);
    jogar(&e, coord);
    assert (obter_num_jogadas(e) == 1);


}