#include "teste.h"
#include "testa_estado.h"
#include "testa_jogar.h"
#include "testa_vencedor.h"
#include "testa_pos.h"

void teste (ESTADO e)
{
    testa_estado(e);
    testa_jogar(e);
    testa_estado(e);
    testa_vencedor(e);
    testa_estado(e);
    testa_pos(e);
    testa_estado(e);
}
