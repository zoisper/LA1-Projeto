#include "main_teste.h"
#include "testar_estado.h"
#include "testar_jogar.h"
#include "testar_vencedor.h"
#include "testar_pos.h"
#include "testar_heuristica.h"

void teste (ESTADO e)
{
    testa_estado(e);
    testa_jogar(e);
    testa_estado(e);
    testa_vencedor(e);
    testa_estado(e);
    testa_pos(e);
    testa_estado(e);
    testa_jog(e);
    testa_estado(e);
    testa_jog2(e);
    testa_estado(e);
}
