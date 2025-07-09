void menuED(int edNum);
/** ==========================================================
 *  Funcao que controla e exibe o menu principal do programa
 *  ========================================================== */
void menuPrincipal()
{
    // Variavel do tipo string para armazenar a entrada bruta do usuario.
    std::string entrada;
    // Variavel para guardar a opcao numerica do usuario, inicializada com um valor invalido.
    int op = -1;

    // Inicia um laco do-while. O bloco de codigo executa pelo menos uma vez
    // e continuara a repetir enquanto a condicao (op != 0) for verdadeira.
    do
    {
        // Chama uma funcao para limpar a tela do console antes de exibir o menu.
        clrscr();
        // Chama a funcao para imprimir na tela o conteudo do arquivo de menu.
        printJPZ("menus/selectED");

        // Le a linha inteira que o usuario digitar no console e armazena na variavel 'entrada'.
        // Isso permite ler opcoes com mais de um digito e tambem espacos.
        std::getline(std::cin, entrada);

        // Inicia um bloco de tratamento de excecoes.
        // E usado para lidar com erros que podem ocorrer se o usuario digitar
        // um texto que nao pode ser convertido para um numero.
        try
        {
            // Tenta converter a string 'entrada' para um numero inteiro.
            // O resultado e armazenado na variavel 'op'.
            op = std::stoi(entrada);
        }
        catch (const std::exception &e)
        {
            // Se a conversao em std::stoi falhar, este bloco 'catch' e executado.
            // A variavel 'op' e definida como -1, um valor que sera tratado como uma opcao invalida.
            op = -1;
        }

        if ((op >= 1) && (op <= 14))
        {
            menuED(op);
        }

        // A condicao do laco. Ele continuara executando enquanto 'op' for diferente de 0.
    } while (op != 0);

    // Esta linha e executada uma vez que o laco e encerrado (quando op for 0).
    // Imprime uma mensagem de despedida para o usuario.
    clrscr();
    printf("\nFechando o programa...\n\n");
}

/** ==========================================================
 * Funcao que controla e exibe o menu de um ED especifico.
 * @param edNum Numero do ED a ser exibido.
 * ==========================================================*/
void menuED(int edNum)
{
    // Declaracao de variaveis para entrada e opcao.
    std::string entrada;
    int op = -1;

    do
    {
        // Limpa a tela e exibe o cabecalho do menu.
        clrscr();
        if (edNum < 10)
            printf("(ED0%d)\n", edNum);
        else
            printf("(ED%d)\n", edNum);
        printJPZ("menus/EDs");

        // Le e processa a entrada do usuario.
        std::getline(std::cin, entrada);
        try
        {
            op = std::stoi(entrada);
        }
        catch (const std::exception &e)
        {
            op = -1;
        }

        if ((op >= 1) && (op <= 12))
        { // Chaves para criar um escopo local.
            clrscr();

            // Monta o caminho dinamico para o arquivo do exercicio.
            // Ex: "EDs/5/1" para o exercicio 1 do ED05.
            std::string caminhoExercicio = "EDs/" + std::to_string(edNum) + "/" + std::to_string(op);

            // Tenta imprimir o arquivo do exercicio e verifica o resultado.
            bool sucesso = printJPZ(caminhoExercicio);

            // Se a funcao retornou 'false' (nao encontrou o arquivo), imprime o 404.
            if (!sucesso)
            {
                printJPZ("404");
            }

            // Pausa a tela independentemente do resultado.
            pauseScr();
        }

    } while (op != 0);

    // Mensagem ao sair do menu do ED
    printf("\nVoltando ao menu principal...\n\n");
}