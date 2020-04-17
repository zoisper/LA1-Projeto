cmake_minimum_required(VERSION 3.15)
project(Projeto C)

set(CMAKE_C_STANDARD 99)

add_executable(Projeto main.c dados/muda_estado.c dados/muda_estado.h interface/mostra.c interface/mostra.h logica/jogar.c logica/jogar.h dados/inicializa_estado.c dados/inicializa_estado.h dados/obter_dados_estado.c dados/obter_dados_estado.h interface/interpretador.c interface/interpretador.h interface/prompt.c interface/prompt.h logica/gravar_ler_jogo.c logica/gravar_ler_jogo.h testes/testa_estado.c testes/testa_estado.h logica/pos.h logica/pos.c testes/testa_jogar.c testes/testa_jogar.h testes/main_teste.c testes/main_teste.h testes/testa_vencedor.c testes/testa_vencedor.h testes/testa_pos.c testes/testa_pos.h dados/lista.c dados/lista.h logica/jog.c logica/jog.h)