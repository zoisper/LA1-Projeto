
#ifndef PROJETO_JOG_H
#define PROJETO_JOG_H

#include "../dados/lista.h"
#include "../dados/inicializa_estado.h"

LISTA jogadas_possiveis(ESTADO e);
COORDENADA escolhe_jogada_random (LISTA lista);
COORDENADA jog_random (ESTADO e);
#endif //PROJETO_JOG_H
