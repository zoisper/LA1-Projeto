cmake_minimum_required(VERSION 3.15)
project(Projeto C)

set(CMAKE_C_STANDARD 99)

add_executable(Projeto main.c dados/muda_dados.c dados/muda_dados.h interface/mostra_tabuleiro.c interface/mostra_tabuleiro.h logica/jogar.c logica/jogar.h dados/inicializa_estado.c dados/inicializa_estado.h dados/obter_dados.c dados/obter_dados.h interface/interpretador.c interface/interpretador.h interface/prompt.c interface/prompt.h logica/grava_jogo.c logica/grava_jogo.h dados/retoma_estado.c dados/retoma_estado.h interface/mostra_movimentos.c interface/mostra_movimentos.h testes/testa_estado.c testes/testa_estado.h logica/ler_jogo.c logica/ler_jogo.h logica/pos.h logica/pos.c testes/testa_jogar.c testes/testa_jogar.h testes/teste.c testes/teste.h testes/testa_vencedor.c testes/testa_vencedor.h testes/testa_pos.c testes/testa_pos.h dados/lista.c dados/lista.h logica/jog.c logica/jog.h interface/mostra_vencedor.c interface/mostra_vencedor.h)