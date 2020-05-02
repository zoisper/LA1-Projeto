
/**
@file lista.h
Definição de lista e das funções que manipulam listas
*/
#ifndef PROJETO_LISTA_H
#define PROJETO_LISTA_H
/**
\brief Tipo de dados para a lista.
*/
typedef struct lista
{
    /** Apontador para o dado guardado na lista */
    void * dado;
    /** Apontador para o nodo seguinte */
    struct lista  *prox;
}Nodo, *LISTA;

/**
\brief Cria uma lista.
@return Uma lista vazia, isto é, a apontar para NULL.
*/
LISTA criar_lista();

/**
\brief Insere um nodo no inicio da lista.
@param L A lista.\n
@param valor Apontador para o elemento que vai ser inserido na lista.\n
@return A lista l com o valor inserido na  cabeça.
*/
LISTA insere_cabeca(LISTA L, void *valor);

/**
\brief Devolve o elemento que esta na cabeça da lista.
@param L A lista.\n
@return o elemento que esta na cabeça da lista.
*/
void *devolve_cabeca(LISTA L);

/**
\brief Devolve a cauda da lista.
@param L A lista.\n
@return A cauda da lista.
*/
LISTA proximo(LISTA L);

/**
\brief Remove a cabeça da lista (libertando o espaço ocupado) e devolve a cauda.
@param L A lista.\n
@return A cauda da lista.
*/
LISTA remove_cabeca(LISTA L);

/**
\brief Verifica se a lista está vazia.
@param L A lista.\n
@return 1 se a lista está vazia e 0 se não está vazia.
*/
int lista_esta_vazia(LISTA L);

/**
\brief Devolve o cumprimento da lista.
@param L A lista.\n
@return O número de elementos da lista.
*/
int comprimento_lista (LISTA L);
/**
\brief Liberta o espaço ocupado em memoria pela lista.
@param L Apontador para a  lista.
*/
void limpa_lista(LISTA *L);

#endif //PROJETO_LISTA_H
