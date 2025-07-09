/**
 * @brief Le e imprime o conteudo de um arquivo. O diretorio base e "texts/".
 * @param nomeDoArquivo Caminho relativo a partir de "texts/".
 * @return Retorna 'true' se o arquivo for aberto e lido com sucesso, 'false' caso contrario.
*/
bool printJPZ(const std::string& nomeDoArquivo) {
    // Monta o caminho completo do arquivo.
    std::string caminhoCompleto = "texts/" + nomeDoArquivo;

    // Cria o stream de arquivo.
    std::ifstream arquivo(caminhoCompleto);

    // Se o arquivo nao pode ser aberto, retorna 'false'.
    if (!arquivo.is_open()) {
        return false;
    }

    // Le e imprime o arquivo linha por linha.
    std::string linha;
    while (std::getline(arquivo, linha)) {
        std::cout << linha << std::endl;
    }

    // Fecha o arquivo e retorna 'true' indicando sucesso.
    arquivo.close();
    return true;
}