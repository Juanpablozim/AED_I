#include "defines.hpp"
#include "imports.hpp"
#include <locale.h>

int main (){
    // --- Bloco de configuracao de localizacao multiplataforma ---
// Compilacao condicional baseada no sistema operacional.
#if defined(_WIN32) || defined(_WIN64)
    // Define a localizacao para portugues no Windows.
    // Isso ajuda o printf a entender corretamente os caracteres.
    setlocale(LC_ALL, "Portuguese");
#elif defined(__linux__) || defined(__APPLE__) || defined(__unix__)
    // Define a localizacao para portugues do Brasil com UTF-8 em sistemas Unix-like.
    // E o padrao para a maioria das distribuicoes Linux e para o macOS.
    setlocale(LC_ALL, "pt_BR.UTF-8");
#endif
// --- Fim do bloco de configuracao ---

    clrscr();
    printJPZ("program/presentation");
    pauseScr();
    menuPrincipal();

    return SUCCES;
}