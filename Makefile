# Nome do compilador
CXX = g++

# Nome do executavel
EXECUTAVEL = AED1EDs

# Arquivo fonte principal
FONTE = main.cpp

# Alvo padrao: compila o programa
all: $(EXECUTAVEL)

# Regra para criar o executavel a partir do arquivo fonte
$(EXECUTAVEL): $(FONTE)
	$(CXX) -o $(EXECUTAVEL) $(FONTE)

# Alvo para rodar o programa
run: $(EXECUTAVEL)
	./$(EXECUTAVEL)

# Alvo para limpar os arquivos compilados
clean:
	rm -f $(EXECUTAVEL)