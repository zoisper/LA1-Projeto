//
// Created by tiago on 11/04/20.
//

#ifndef PROJETO_JOG_H
#define PROJETO_JOG_H

#include "../dados/lista.h"
#include "../dados/inicializa_estado.h"

LISTA casas_possiveis(ESTADO *e);
CASA *escolhe_casa_random (LISTA l);
COORDENADA converte_casa_coordenada(ESTADO *e, CASA *casa);
#endif //PROJETO_JOG_H
