cmake_minimum_required(VERSION 3.15)
project(Bot C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_FLAGS "-std=gnu11 -Wall -Wextra -pedantic-errors -O")
add_executable(Bot main.c jogar.c jogar.h inicializar_estado.c inicializar_estado.h obter_dados_estado.c obter_dados_estado.h ler_jogo.c ler_jogo.h lista.c lista.h escolher_jogada.c escolher_jogada.h gravar_jogo.h gravar_jogo.c mudar_estado.c mudar_estado.h)