/**
@file lista.c
Funções que manipulam listas
*/
#include "lista.h"
#include <stdlib.h>


LISTA criar_lista()
{
    LISTA r = NULL;
    return  r;
}

LISTA insere_cabeca(LISTA L, void *valor)
{
    LISTA r = (LISTA) malloc(sizeof(Nodo));
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
    else
        return NULL;
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
        free(L->dado);
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

void limpa_lista(LISTA *L)
{
    LISTA r = NULL;
    while (*L)
    {
       r = *L;
       *L = (*L)->prox;
       free(r->dado);
       free(r);
    }

}