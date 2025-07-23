# ######################################################## #
# AED_I - Exercicios de Algoritmos e Estruturas de Dados I #
# ######################################################## #

Este repositorio contem uma serie de exercicios de programacao desenvolvidos para a disciplina de Algoritmos e Estruturas de Dados I. O codigo fonte esta escrito em C++ e consolidado em um unico arquivo (`main.cpp`), onde o usuario pode escolher qual exercicio executar atraves de um menu interativo.

# ###### #
# INDICE #
# ###### #
    Alteracoes no README posteriores pode causar leves divergencias na linha aproximada da posicao do item descrito no README. Leve a linha como uma informação aproximada (Podendo estar precisa).

 Descricao                                          | Linha Aproximada
#   1. Tecnologias Utilizadas ===================== | 33
#   2. Estrutura do Projeto ======================= | 40
#   3. Como Comecar =============================== | 63
        3.1. Pre-requisitos ----------------------- | 69
            3.1.2. No Linux (Debian/Ubuntu):        | 76
            3.1.3. No Windows:                      | 83
        3.2. Compilacao --------------------------- | 98
            3.2.1. make                             | 101
            3.2.2. manualmente com seu compilador   | 118
        3.3. COMO USAR ---------------------------- | 123
            3.3.1 Executar                          | 126
            3.3.2 Instrucoes de uso                 | 138
#   4. Usar seu exercicio ========================= | 147
        4.1. Para limpar os Codigos --------------- | 151
        4.2. Para limpar os Enunciados ------------ | 163
#   5. Como Contribuir ============================ | 177
#   Licensa ======================================= | 191
#   Autor ========================================= | 197

# ######################### #
# 1. Tecnologias Utilizadas #
# ######################### #

*   **C++:** Linguagem principal para a implementacao dos algoritmos.
*   **Make:** Ferramenta para automacao da compilacao e execucao do projeto.

# ####################### #
# 2. Estrutura do Projeto #
# ####################### #

*   `main.cpp`: Arquivo principal que contem a implementacao de todos os exercicios.
*   `Makefile`: Arquivo de configuracao que define os comandos para compilar e executar o programa.
*   `head/`: Pasta com arquivo de importacoes e arquivo de definicoes gerais (apenas para
    organizacao)
*   `professor/`: Pasta provida pelo professor (Apostila, exemplos, enunciados, instruces, etc...)   
*   ``: 

# Uteis:
    Estes arquivos podem ser alterados caso deseje alterar o enunciado e/ou o codigo do exercicio:

*   `EDs/`: Pasta com o codigo de cada exercicio (Funcoes de cada exercicio agrupadas dentro do `.hpp` de cada ED)

*   `texts/`:  Pasta com todos os textos mostrados no programa
*   `texts/menus/`:    Pasta com textos dos menus
*   `texts/program/`:  Pasta com textos gerais do programa
*   `texts/404`:       Texto de pagina inexistente

*   `texts/EDs`:  Pasta com o texto do enunciado de cada exercicio (Existem 14 pastas de cada ed, dentro de cada pasta tem 12 arquivos do tipo texto com o texto de cada enunciado {1 ao 10 sao os exercicios e 11 e 12 os dois exercicios extras})

# ############### #
# 3. Como Comecar #
# ############### #

Siga as instrucoes abaixo para compilar e executar o projeto em seu ambiente local.

# ################### #
# 3.1. Pre-requisitos #
# ################### #

Para executar este projeto, voce pode ter um compilador C++ e a ferramenta `make` instalados.

ATENCAO: Caso não queira usar o make, tera de compilar e rodar manualmente com o seu compilador (pode pular esta etapa)

*   **3.1.2. No Linux (Debian/Ubuntu):**
```bash -------------------------------------------------------
    sudo apt-get update
    sudo apt-get install build-essential
```
---------------------------------------------------------------

*   **3.1.3. No Windows:**
    A maneira recomendada e instalar o **MinGW-w64** atraves do **MSYS2**. Isso lhe dara acesso ao compilador `g++` e ao `make`. Siga os passos:
    1. Instale o [MSYS2](https.www.msys2.org/).
    
    2. Apos a instalacao, abra o terminal MSYS2 e instale o toolchain com o comando:
```bash -------------------------------------------------------
       pacman -S --needed base-devel mingw-w64-x86_64-toolchain
```
---------------------------------------------------------------

*   3. Adicione o caminho `C:\msys64\mingw64\bin` as variaveis de ambiente do Windows.
    4. Reinicie seu terminal (PowerShell/CMD).
    5. Caso ainda não funcione, abra a pasta `C:\msys64\mingw64\bin` encontre o arquivo 'mingw32-make.exe' e crie uma copia com nome 'make.exe'

# ############### #
# 3.2. Compilacao #
# ############### #

*   **3.2.1. make**
    Com os pre-requisitos instalados, clone o repositorio e use o comando `make` para compilar o projeto.

```bash -------------------------------------------------------
    # Clone o repositorio
    git clone https://github.com/Juanpablozim/AED_I.git

    # Entre na pasta do projeto
    cd AED_I

    # Compile o codigo
    make
```
---------------------------------------------------------------

    Este comando ira usar o Makefile para invocar o compilador g++ e gerar um arquivo executavel chamado AED1EDs.

*   **3.2.2. manualmente com seu compilador**
    Execute o comando manualmente do seu compilador no arquivo `main.cpp` e de preferencia para gerar o arquivo com nome `AED1EDs.exe`.
    ATENCAO: Caso escolha outro nome, use o seu nome nas instrucoes abaixo.

# #################### #
# ## 3.3. COMO USAR ## #
# #################### #

# 3.3.1 Executar
Para executar o programa, use o comando make run ou execute o arquivo diretamente.

```bash -------------------------------------------------------
# Opcao 1: Usando o Makefile
make run

# Opcao 2: Executando diretamente
./AED1EDs
```
---------------------------------------------------------------

# 3.3.2 Instrucoes de uso
- Apos a execucao, o programa ira solicitar que voce digite um numero (de 1 a 14) para escolher qual Exercicio Dirigido deseja testar
-> Digite algo entre 1 e 14 para selecionar o ED e 0 encerrar o programa.
   
    - Após selecionar o ED uma lista de exercicios poderá ser selecionada (de 1 a 12) sendo de 1 a 10 os exercicios do ED e 11 e 12 os dois exercicios extras.
    -> Digite algo entre 1 e 12 para selecionar o exercicio e 0 para voltar a selecao dos EDs.


# ##################### #
# 4. Usar seu exercicio #
# ##################### #
    Caso queira "limpar" os codigos e/ou os enunciados dos exercicios:

*   # 4.1. Para limpar os Codigos
    Acesse a pasta `fontes/codigo`, copie e cole a pasta `EDs/` na pasta raiz substituindo a pasta `EDs/`

    Passo 1:
    raiz/
    |-fontes/
    |-|-codigo/
    |-|-|-EDs/ -> Copiar

    Passo 2:
    raiz/ -> Colar  'EDs/'  (Substituindo o original)

*   # 4.2. Para limpar os Enunciados
    Acesse a pasta `fontes/text`, copie e cole a pasta `EDs/` na pasta `texts/` substituindo a pasta `EDs/`

    Passo 1:
    raiz/
    |-fontes/
    |-|-text/
    |-|-|-EDs/ -> Copiar

    Passo 2:
    raiz/
    |-texts/ -> Colar 'EDs/' (Substituindo o original)

# ################## #
# 5. Como Contribuir #
# ################## #

Contribuicoes sao o que tornam a comunidade de codigo aberto um lugar incrivel para aprender, inspirar e criar. Qualquer contribuicao que voce fizer sera muito apreciada.

Se voce tiver uma sugestao para melhorar este projeto, faca um fork do repositorio e crie uma pull request. Voce tambem pode simplesmente abrir uma issue com a tag "melhoria".

1. Faca um Fork do projeto:
2. Crie uma Branch para sua Feature (git checkout -b feature/AmazingFeature).
3. Faca o Commit de suas alteracoes (git commit -m 'Adiciona alguma Feature Incrivel').
4. Faca o Push para a Branch (git push origin feature/AmazingFeature).
5. Abra uma Pull Request.

# ####### #
# Licenca #
# ####### #

Ainda em pesquisa

# ##### #
# Autor #
# ##### #
Juan Pablo Ramos - Juanpablozim