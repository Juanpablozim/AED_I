# ######################################################## #
# AED_I - Exercicios de Algoritmos e Estruturas de Dados I #
# ######################################################## #

Este repositorio contem uma serie de exercicios de programacao desenvolvidos para a disciplina de Algoritmos e Estruturas de Dados I. O codigo fonte esta escrito em C++ e consolidado em um unico arquivo (`main.cpp`), onde o usuario pode escolher qual exercicio executar atraves de um menu interativo.

# ###################### #
# Tecnologias Utilizadas #
# ###################### #

*   **C++:** Linguagem principal para a implementacao dos algoritmos.
*   **Make:** Ferramenta para automacao da compilacao e execucao do projeto.

# #################### #
# Estrutura do Projeto #
# #################### #

*   `main.cpp`: Arquivo principal que contem a implementacao de todos os exercicios.
*   `Makefile`: Arquivo de configuracao que define os comandos para compilar e executar o programa.
*   `imports.hpp`: Arquivo de importacoes gerais (apenas para organizacao)
*   `defines.hpp`: Arquivo de definicoes  gerais (apenas para organizacao)

## Como Comecar

Siga as instrucoes abaixo para compilar e executar o projeto em seu ambiente local.

### Pre-requisitos

Para executar este projeto, voce precisa ter um compilador C++ e a ferramenta `make` instalados.

*   **No Linux (Debian/Ubuntu):**
```bash
    sudo apt-get update
    sudo apt-get install build-essential
```

*   **No Windows:**
    A maneira recomendada e instalar o **MinGW-w64** atraves do **MSYS2**. Isso lhe dara acesso ao compilador `g++` e ao `make`. Siga os passos:
    1. Instale o [MSYS2](https.www.msys2.org/).
    2. Apos a instalacao, abra o terminal MSYS2 e instale o toolchain com o comando:
```bash
       pacman -S --needed base-devel mingw-w64-x86_64-toolchain
```

    3. Adicione o caminho `C:\msys64\mingw64\bin` as variaveis de ambiente do Windows.
    4. Reinicie seu terminal (PowerShell/CMD).
    5. Caso ainda não funcione, abra a pasta `C:\msys64\mingw64\bin` encontre o arquivo 'mingw32-make.exe' e crie uma copia com nome 'make.exe'

### Compilacao

Com os pre-requisitos instalados, clone o repositorio e use o comando `make` para compilar o projeto.

```bash
    # Clone o repositorio
    git clone https://github.com/Juanpablozim/AED_I.git

    # Entre na pasta do projeto
    cd AED_I

    # Compile o codigo
    make
```

Este comando ira usar o Makefile para invocar o compilador g++ e gerar um arquivo executavel chamado AED1EDs.

# ############### #
# ## COMO USAR ## #
# ############### #

# Executar
Para executar o programa, use o comando make run ou execute o arquivo diretamente.

```bash
# Opcao 1: Usando o Makefile
make run

# Opcao 2: Executando diretamente
./AED1EDs
```

# Instrucoes de uso
- Apos a execucao, o programa ira solicitar que voce digite um numero (de 1 a 14) para escolher qual Exercicio Dirigido deseja testar
-> Digite algo entre 1 e 14 para selecionar o ED e 0 encerrar o programa.
   
    - Após selecionar o ED uma lista de exercicios poderá ser selecionada (de 1 a 12) sendo de 1 a 10 os exercicios do ED e 11 e 12 os dois exercicios extras.
    -> Digite algo entre 1 e 12 para selecionar o exercicio e 0 para voltar a selecao dos EDs.

# ############### #
# Como Contribuir #
# ############### #

Contribuicoes sao o que tornam a comunidade de codigo aberto um lugar incrivel para aprender, inspirar e criar. Qualquer contribuicao que voce fizer sera muito apreciada.

Se voce tiver uma sugestao para melhorar este projeto, faca um fork do repositorio e crie uma pull request. Voce tambem pode simplesmente abrir uma issue com a tag "melhoria".

1. Faca um Fork do projeto:
2. Crie uma Branch para sua Feature (git checkout -b feature/AmazingFeature).
3. Faca o Commit de suas alteracoes (git commit -m 'Adiciona alguma Feature Incrivel').
4. Faca o Push para a Branch (git push origin feature/AmazingFeature).
5. Abra uma Pull Request.

# Licenca #

Distribuido sob a Licenca MIT Veja o arquivo LICENSE.txt para mais informacoes, ou acesse https://opensource.org/licenses/MIT

# ##### #
# Autor #
# ##### #
Juan Pablo Ramos - Juanpablozim