

#include "dados/inicializar_estado.h"
#include "interface/mostrar.h"
#include "interface/interpretador.h"
#include "testes/main_teste.h"
#include "logica/fim_jogo.h"


int main()
{
    ESTADO *e;
    e = inicializar_estado();
    int controlo = 0;
    int vencedor= 0;

    teste (*e);

    while (vencedor == 0 && controlo !=2)
    {
        mostrar_tabuleiro(*e, stdout, 1);
        prompt(*e, controlo);
        controlo = interpretador(e);
        vencedor = verificar_vencedor(*e);
        if(vencedor !=0)
        {
            mostrar_vencedor(vencedor);
            mostrar_tabuleiro(*e, stdout, 1);

        }

    }
    return 0;
}
