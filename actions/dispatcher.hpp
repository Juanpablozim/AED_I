// Coloque as declaracoes dos arquivos .h dos seus exercicios aqui
#include "../EDs/ED01/ED01.h"

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
                &exercicio_01, &exercicio_02, &exercicio_03, &exercicio_04, &exercicio_05, &exercicio_06, &exercicio_07, &exercicio_08, &exercicio_09, &exercicio_10 // Adicione as outras aqui
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
            // Exemplo para a ED02
            // std::vector<FuncaoExercicio> funcoesED02 = { &ed02_ex01, &ed02_ex02 };
            // if (op >= 1 && op <= funcoesED02.size()) {
            //     funcoesED02[op - 1]();
            // } else {
            //     printf("\nExercicio invalido para a ED02.\n");
            // }
            printJPZ("404");
            break;
        }

        default:
            // Se o exercicio nao foi encontrado, mostra o 404.
            printJPZ("404");
            break;
    }
}