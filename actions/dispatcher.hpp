// IMPOTACOES DOS EDs
#include "importEDs.hpp"

#include <vector>   // Para usar std::vector
#include <functional> // Para usar std::function ou ponteiros de funcao

/**
 * Despachante de exercicios.
 * Chama a funcao de exercicio correta com base nos parametros
 * @param edNum O numero da Estrutura de Dados (1-14)
 * @param op O numero do exercicio selecionado
*/
void executarExercicio(int edNum, int op) {
    // Ponteiro para uma funcao que nao recebe argumentos e nao retorna nada.
    // E o tipo das nossas funcoes de exercicio.
    using FuncaoExercicio = void(*)();

    // Estrutura de controle principal para selecionar a ED correta.
    switch (edNum) {
        case 1: {
            // Cria um vetor com os ponteiros para as funcoes da ED01.
            std::vector<FuncaoExercicio> funcoesED01 = {
                &ex01ed01, &ex02ed01, &ex03ed01, &ex04ed01, &ex05ed01, &ex06ed01, &ex07ed01, &ex08ed01, &ex09ed01, &ex10ed01
            };
            // Verifica se a opcao e valida para este vetor.
            if (op >= 1 && op <= funcoesED01.size()) {
                // Chama a funcao usando o ponteiro no indice correto.
                funcoesED01[op - 1](); // op-1 para converter (1-N) para (0 a N-1)
            } else {
                // Se o exercicio nao foi encontrado, mostra o 404.
                printJPZ("404");
            }
            break;
        }

        case 2: {
            printJPZ("404");
            /*
            // Cria um vetor com os ponteiros para as funcoes da ED02.
            std::vector<FuncaoExercicio> funcoesED01 = {
                &ex01ed02, &ex02ed02, &ex03ed02, &ex04ed02, &ex05ed02, &ex06ed02, &ex07ed02, &ex08ed02, &ex09ed02, &ex10ed02
            };
            // Verifica se a opcao e valida para este vetor.
            if (op >= 1 && op <= funcoesED01.size()) {
                // Chama a funcao usando o ponteiro no indice correto.
                funcoesED01[op - 1](); // op-1 para converter (1-N) para (0 a N-1)
            } else {
                // Se o exercicio nao foi encontrado, mostra o 404.
                printJPZ("404");
            }
            */
            break;
        }

        default:
            // Se o exercicio nao foi encontrado, mostra o 404.
            printJPZ("404");
            break;
    }
}