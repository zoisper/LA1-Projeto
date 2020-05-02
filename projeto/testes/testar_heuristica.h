/**
@file testar_heuristica.h
 Testes aos comandos jog e jog2.
 */
#ifndef PROJETO_TESTAR_HEURISTICA_H
#define PROJETO_TESTAR_HEURISTICA_H

#include "../dados/inicializar_estado.h"

/**
 * Funçao que faz varias jogadas utilizando o comando 'jog' e verifica se este funciona corretamente.
 * @param e O valor do estado.
 */
void testa_jog(ESTADO e);

/**
 * Funçao que faz varias jogadas utilizando o comando 'jog2' e verifica se este funciona corretamente.
 * @param e O valor do estado.
 */
void testa_jog2(ESTADO e);
#endif //PROJETO_TESTAR_HEURISTICA_H
