

#include "jog.h"
#include "../dados/obter_dados.h"
#include <time.h>
#include <stdlib.h>

COORDENADA jog_random (ESTADO e)
{
    LISTA lista;
    COORDENADA coord;

    lista = jogadas_possiveis(e);
    coord = escolhe_jogada_random(lista);
    limpa_lista(lista);
    return  coord;

}

LISTA jogadas_possiveis(ESTADO e)
{
    int l,c,ultima_linha, ultima_coluna;
    LISTA lista;
    COORDENADA *coord_ptr;
    ultima_coluna = obter_ultima_jogada_coluna(e);
    ultima_linha = obter_ultima_jogada_linha(e);
    lista = criar_lista();
    for(l=ultima_linha-1; l <=ultima_linha +1; l++)
        for(c=ultima_coluna-1; c <=ultima_coluna+1; c++)
            if ((obter_casa(e, l,c) == VAZIO) && l>=0 && l<8 && c>=0 && c<8)
            {
                coord_ptr = malloc(sizeof(COORDENADA));
                coord_ptr->coluna = c;
                coord_ptr->linha = l;
                lista = insere_cabeca(lista, coord_ptr);
            }

    return lista;
}
COORDENADA escolhe_jogada_random (LISTA lista)
{
    int i, len,random;
    long ultime;
    COORDENADA * coord_ptr ;
    COORDENADA coord;
    len = comprimento_lista (lista);
    time (&ultime);
    srand(ultime);
    random = rand() % len;
    for (i=0; i<random; i++)
        lista = proximo(lista);
    coord_ptr = devolve_cabeca(lista);
    coord.linha = coord_ptr->linha;
    coord.coluna = coord_ptr->coluna;
    return coord;
}
