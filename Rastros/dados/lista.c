//
// Created by tiago on 07/04/20.
//

#include "lista.h"
#include <stdlib.h>


LISTA criar_lista()
{
    LISTA r = NULL;
    return  r;
}

LISTA insere_cabeca(LISTA L, void *valor)
{
    LISTA r = (LISTA) malloc(sizeof(NodoLista));
    if (!L)
    {
        r->dado = valor;
        r->prox = NULL;
    }
    else
    {
        r->dado = valor;
        r->prox = L;
    }

    return  r;
}

void *devolve_cabeca(LISTA L)
{
    if (L)
    return L->dado;
}

LISTA proximo(LISTA L)
{
    LISTA r = NULL;
    if (L)
        r = L->prox;
    return r;
}


LISTA remove_cabeca(LISTA L)
{
    LISTA r = NULL;
    if (L)
    {
        r = L->prox;
        free (L);

    }
    return  r;
}

int lista_esta_vazia(LISTA L)
{
    if (L)
        return 0;
    else
        return 1;
}

int comprimento_lista (LISTA L)
{
    int r=0;
    while (L)
    {
        r++;
        L = L->prox;
    }
    return r;
}

void limpa_lista(LISTA L)
{
    LISTA r = NULL;
    while (L)
    {
       r = L;
       L = L->prox;
       free(r);
    }

}