

#include "jog.h"
#include "obter_dados_estado.h"
#include "jogar.h"
#include <time.h>
#include <stdlib.h>




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
COORDENADA obter_coordenada_lista (LISTA lista, int num_nodo)
{
    int i;
    COORDENADA * coord_ptr ;
    COORDENADA coord;
    for (i=0; i<num_nodo; i++)
        lista = proximo(lista);
    coord_ptr = devolve_cabeca(lista);
    coord.linha = coord_ptr->linha;
    coord.coluna = coord_ptr->coluna;
    return coord;
}


COORDENADA jog_minimax (ESTADO e, int profundidade)
{
    int index = 0;
    LISTA lista = jogadas_possiveis(e);
    int len = comprimento_lista(lista);
    int scores[len];
    for(int i=0; i<len; i++)
        scores[i] = 0;
    scores_possiveis(scores, len , e, lista, profundidade);

    if (obter_jogador_atual(e) == 1)
        index = max_index(scores, len, lista);
    else
        index = min_index(scores, len, lista);

    COORDENADA coord = obter_coordenada_lista(lista, index);
    limpa_lista(&lista);
    return coord;

}
void scores_possiveis(int scores [], int size, ESTADO e, LISTA lista, int profundidade)
{
    COORDENADA *coord_ptr = NULL, coord = {0,0};
    for (int i=0; i<size; i++)
    {
        coord_ptr = devolve_cabeca(lista);
        coord.linha = coord_ptr->linha;
        coord.coluna = coord_ptr->coluna;
        scores[i] = obter_score(e, coord, profundidade);
        lista = proximo(lista);
    }
}

int obter_score (ESTADO e, COORDENADA coord, int profundidade)
{
    jogar(&e, coord);

    if(profundidade <= 0 && verificar_vencedor(e) == 0)
        return 0;
    if (verificar_vencedor(e) == 1)
        return 1*(profundidade+1);
    if (verificar_vencedor(e) == 2)
        return (-1)*(profundidade+1);

    profundidade--;

    LISTA lista = jogadas_possiveis(e);
    int len = comprimento_lista(lista);
    int scores[len];
    for(int i=0; i<len; i++)
        scores[i] = 0;
    scores_possiveis(scores, len , e, lista, profundidade);
    limpa_lista(&lista);
    if (obter_jogador_atual(e)==1)
        return max (scores, len);
    else
        return min (scores, len);
}

int min ( int array[],  int size  )
{
    int i, r;
    r = array[0];
    for (i=0; i<size; i++)
        if (array[i]< r)
            r= array[i];
    return r;
}

int max ( int array[],  int size  )
{
    int i, r;
    r = array[0];
    for (i=0; i<size; i++)
        if (array[i]> r)
            r= array[i];
    return r;
}

int min_index ( int array[],  int size, LISTA jogadas_possivies )
{
    int i, r;
    COORDENADA coord = obter_coordenada_lista(jogadas_possivies, 0);

    r = 0;
    for (i=0; i<size; i++)
    {
        COORDENADA aux = obter_coordenada_lista(jogadas_possivies, i);
        if (array[i]< array[r])
            r = i;
        else
        if (array[i]== array[r] && aux.coluna >= coord.coluna && aux.linha <= coord.linha)
        {
            r=i;
            coord.coluna = aux.coluna;
            coord.linha = aux.linha;
        }
    }

    return r;
}

int max_index ( int array[],  int size, LISTA jogadas_possivies  )
{
    int i, r;
    COORDENADA coord = obter_coordenada_lista(jogadas_possivies, 0);
    r = 0;
    for (i=0; i<size; i++)
    {
        COORDENADA aux = obter_coordenada_lista(jogadas_possivies, i);
        if (array[i]> array[r])
            r= i;
        else
        if (array[i]== array[r] && aux.coluna <= coord.coluna && aux.linha >= coord.linha)
        {
            r=i;
            coord.coluna = aux.coluna;
            coord.linha = aux.linha;
        }
    }

    return r;
}
