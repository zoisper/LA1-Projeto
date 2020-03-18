#include <stdio.h>
#include "dados.h"
#include "interface.h"
#include "logica.h"
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
