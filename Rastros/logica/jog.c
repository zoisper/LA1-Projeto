//
// Created by tiago on 11/04/20.
//

#include "jog.h"
#include "../dados/obter_dados.h"
#include <time.h>
#include <stdlib.h>

LISTA casas_possiveis(ESTADO *e)
{
    int l,c,ultima_linha, ultima_coluna;
    LISTA L;
    ultima_coluna = obter_ultima_jogada_coluna(*e);
    ultima_linha = obter_ultima_jogada_linha(*e);
    L = criar_lista();
    for(l=ultima_linha-1; l <=ultima_linha +1; l++)
        for(c=ultima_coluna-1; c <=ultima_coluna+1; c++)
            if ((obter_casa(*e, l,c) == VAZIO) && l>=0 && l<8 && c>=0 && c<8)
            L = insere_cabeca(L, obter_endereco_casa(e,l,c));

    return L;
}

CASA *escolhe_casa_random (LISTA l)
{
    int i, len,random;
    long ultime;
    CASA *casa;
    len = comprimento_lista (l);
    time (&ultime);
    srand(ultime);
    random = rand() % len;
    for (i=0; i<random; i++)
        l = proximo(l);
    casa = devolve_cabeca(l);
    return casa;
}

COORDENADA converte_casa_coordenada(ESTADO *e, CASA *casa)
{
    COORDENADA coord;
    int l,c;
    for(l=0;l<8;l++)
        for(c=0;c<8;c++)
            if (obter_endereco_casa(e,l,c) == casa)
            {
                coord.linha = l;
                coord.coluna = c;
            }

    return  coord;

}