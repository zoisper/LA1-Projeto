//
// Created by tiago on 08/03/20.
//
/**
@file dados.h
Definição do estado e das funções que o manipulam
*/

#ifndef PROJETO_DADOS_H
#define PROJETO_DADOS_H
/**
\brief Tipo de dados para a casa
*/
typedef enum {VAZIO, BRANCA, PRETA} CASA;
/**
\brief Tipo de dados para as coordenadas
*/
typedef struct {
    /** A coordenda da coluna */
    int coluna;
    /** A coordenda da linha*/
    int linha;
} COORDENADA;
/**
\brief Tipo de dados para a jogada
*/
typedef struct {
    COORDENADA jogador1;
    COORDENADA jogador2;
} JOGADA;
/**
\brief Tipo de dados para as jogadas
*/
typedef JOGADA JOGADAS[32];
/**
\brief Tipo de dados para o estado
*/
typedef struct {
    /** O tabuleiro */
    CASA tab[8][8];
    /** As jogadas */
    JOGADAS jogadas;
    /** A coordenada da última jogada */
    COORDENADA ultima_jogada;
    /** O número das jogadas, usado no prompt */
    int num_jogadas;
    /** O jogador atual */
    int jogador_atual;
} ESTADO;

/**
\brief Inicializa o valor do estado.\n
Esta função inicializa o valor do estado. Isso implica o tabuleiro ser colocado na posição inicial e todos os campos do estado estarem com o valor por omissão.
@returns O novo estado
*/
ESTADO *inicializar_estado();
/**
 * \brief Devolve o valor de uma casa.
 * @param e O estado.\n
 * @param coluna A coordenada da coluna da casa.\n
 * @param linha A coordendanda da linha da casa.\n
 * @return O valor da casa.
 */
CASA obter_casa(ESTADO e, int coluna, int linha);
/**
 * \brief Devolve o numero do jogador atual
 * @param e O estado.\n
 * @return O numero do jogador atual.
 */
int obter_jogador_atual (ESTADO e);

/**
 * \brief Devolve o numero de jogadas.
 * @param e O estado.\n
 * @return O numeoro de jogadas.
 */
int obter_num_jogadas (ESTADO e);
/**
 * \brief Devolve a coordendada da coluna da ultima jogada
 * @param e O estado.\n
 * @return A coordenada da coluna da ultima jogada.
 */
int obter_ultima_jogada_coluna(ESTADO e);
/**
 * \brief Devolve a coordendada da linha da ultima jogada.
 * @param e O estado.\n
 * @return A coordenada da linha da ultima jogada.
 */
int obter_ultima_jogada_linha(ESTADO e);
/**
 * \brief Coloca "BRANCA" na casa da cordenada jogada e coloca "PRETA" na casa jogada anteriormente.
 * @param e Apontador para o estado.\n
 * @param c A cordenada.
 */
void muda_casa(ESTADO *e, COORDENADA c);
/**
 * \brief Acrescenta a cordenada jogada ás jogadas.
 * @param e Apontador para o estado.\n
 * @param c A cordenada.
 */
void muda_jogadas(ESTADO *e, COORDENADA c);
/**
 * \brief Altera o jogador atual.
 * @param e Apontador para o estado.
 */
void muda_jogador_atual (ESTADO *e);
/**
 * \brief Altera a ultima jogada.
 * @param e Apontador para o estado.\n
 * @param c A cordenada.
 */
void muda_ultima_jogada (ESTADO *e, COORDENADA c);
/**
 * \brief Incrementa o número de jogadas.
 * @param e Apontador para o estado.\n
 */
void muda_num_jogadas (ESTADO *e);


#endif //PROJETO_DADOS_H
