
/**
@file inicializar_estado.h
Definição do estado e da função que o inicializa.
*/
#ifndef PROJETO_INICIALIZAR_ESTADO_H
#define PROJETO_INICIALIZAR_ESTADO_H
/**
\brief Tipo de dados para a casa
*/
typedef enum {
    /** Casa do tabuleiro vazia. */
    VAZIO,
    /** Ultima casa do tabuleiro ocupada e apartir de onde jogamos. */
    BRANCA,
    /** Casa do tabuleiro ocupada. */
    PRETA
} CASA;
/**
\brief Tipo de dados para as coordenadas.
*/
typedef struct {
    /** A coordenda da coluna. */
    int coluna;
    /** A coordenda da linha. */
    int linha;
} COORDENADA;
/**
\brief Tipo de dados para a jogada.
*/
typedef struct {
    /** A coordenda do jogador 1 */
    COORDENADA jogador1;
    /** A coordenda do jogador 2 */
    COORDENADA jogador2;
} JOGADA;
/**
\brief Tipo de dados para as jogadas.
*/
typedef JOGADA JOGADAS[32];
/**
\brief Tipo de dados para o estado.
*/
typedef struct {
    /** O tabuleiro. */
    CASA tab[8][8];
    /** As jogadas. */
    JOGADAS jogadas;
    /** A coordenada da última jogada. */
    COORDENADA ultima_jogada;
    /** O número das jogadas, usado no prompt. */
    int num_jogadas;
    /** O jogador atual. */
    int jogador_atual;
} ESTADO;

/**
\brief Inicializa o valor do estado.\n
Esta função inicializa o valor do estado. Isso implica o tabuleiro ser colocado na posição inicial e todos os campos do estado estarem com o valor por omissão.
@return O novo estado.
*/
ESTADO *inicializar_estado();
#endif //PROJETO_INICIALIZAR_ESTADO_H
