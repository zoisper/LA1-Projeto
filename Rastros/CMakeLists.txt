cmake_minimum_required(VERSION 3.15)
project(Projeto C)

set(CMAKE_C_STANDARD 99)

add_executable(Projeto main.c dados/muda_dados.c dados/muda_dados.h interface/mostra_tabuleiro.c interface/mostra_tabuleiro.h logica/jogar.c logica/jogar.h logica/verifica_vencedor.c logica/verifica_vencedor.h dados/inicializar_estado.c dados/inicializar_estado.h dados/obter_dados.c dados/obter_dados.h interface/interpretador.c interface/interpretador.h interface/prompt.c interface/prompt.h logica/grava_jogo.c logica/grava_jogo.h logica/retoma_jogo.c logica/retoma_jogo.h interface/mostra_movimentos.c interface/mostra_movimentos.h)