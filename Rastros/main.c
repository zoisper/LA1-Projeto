#include <stdio.h>
#include "dados/muda_dados.h"
#include "interface/mostra_tabuleiro.h"
#include "logica/jogar.h"
#include "interface/interpretador.h"
#include "interface/prompt.h"

int main()
{
    ESTADO *e;
    e = inicializar_estado();
    int controlo = 0;
    mostrar_tabuleiro(*e);
    while (1)
    {
        prompt(*e, controlo);
        controlo = interpretador(e);
    }



    return 0;
}
