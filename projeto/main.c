

#include "dados/inicializar_estado.h"
#include "interface/mostrar.h"
#include "interface/interpretador.h"
#include "interface/prompt.h"
#include "testes/main_teste.h"



int main()
{

    ESTADO *e;
    e = inicializar_estado();
    int controlo = 0;

    mostrar_tabuleiro(*e, stdout,1);
    teste (*e);
    while (controlo != 2)
    {
        prompt(*e, controlo);
        controlo = interpretador(e);
    }
    return 0;
}
