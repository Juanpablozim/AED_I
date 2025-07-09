/**
 * Limpa a tela do console.
*/
void clrscr ( void )
{
// Compilacao condicional baseada no sistema operacional.
#if defined(_WIN32) || defined(_WIN64) || defined(__WINDOWS__)
    system ( "cls" ); // Comando para Windows. OBS: system() nao e recomendado.
#elif defined(__linux__)
    system ( "clear" ); // Comando para Linux.
#elif defined(__APPLE__) && defined(__MACH__)
    system ( "clear" ); // Comando para macOS.
#elif defined(unix) || defined(__unix__) || defined(__unix)
    system ( "clear" ); // Comando para outros sistemas Unix.
#else
    #error Unknown_OS // Erro de compilacao se o SO for desconhecido.
#endif
} // retirada de: "professor/2022-2_aed1_exemplos/io.hpp" (IO_clrscr)

/**
 * Pausa a execucao e depois limpa a tela.
*/
void pauseScr () {
    // Compilacao condicional baseada no sistema operacional.
#if defined(_WIN32) || defined(_WIN64) || defined(__WINDOWS__)
    // Comando de pausa especifico para Windows.
    system("pause");
#else
    // Comando generico para sistemas Unix-like (Linux, macOS).
    // O comando 'read' espera por uma entrada do teclado.
    // -n 1: Le apenas 1 caractere.
    // -s: Nao exibe o caractere digitado (silent).
    // -p "...": Mostra uma mensagem de prompt.
    system("read -n 1 -s -p \"Pressione qualquer tecla para continuar...\"");
#endif

    // Limpa a tela apos a pausa, de forma multiplataforma.
    clrscr();
}

/**
 * Limpa o buffer de entrada do teclado (stdin).
*/
void limpaBuffer () {
    // Variavel para armazenar cada caractere lido.
    int c;

    // Consome caracteres do buffer ate encontrar um '\n' ou o fim do arquivo (EOF).
    while ((c = getchar()) != '\n' && c != EOF);
}