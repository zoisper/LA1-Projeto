#include <stdio.h>
#include "dados.h"
#include "interface.h"
#include "logica.h"
int main()
{
    ESTADO *e;
    e = inicializar_estado();
    mostrar_tabuleiro(*e);
    interpretador(e);



    return 0;
}
