# Makefile - compila todos os .c do repo (recursivo) em bin/<nome>
CC := gcc
CFLAGS := -Wall -Wextra -Wpedantic -std=c11
DBGFLAGS := -g -O0
RELEASEFLAGS := -O2

SRC := $(shell find . -type f -name "*.c" -not -path "./bin/*")
OBJ_DIR := bin
.PHONY: all debug release run clean list

all: dirs $(patsubst ./%.c,$(OBJ_DIR)/%,$(SRC))

# Debug/release helpers
debug: CFLAGS += $(DBGFLAGS)
debug: all

release: CFLAGS += $(RELEASEFLAGS)
release: all

dirs:
	@mkdir -p $(OBJ_DIR)

# Regra genérica: pega each source ./dir/name.c -> bin/dir/name (mantém subpastas no nome)
$(OBJ_DIR)/%: ./% 
	@echo "Compilando $< -> $@"
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $< -o $@ || (echo "Falha ao compilar $<"; false)

# Lista os bins gerados e como rodar
list:
	@echo "Arquivos fonte encontrados:"
	@printf "%s\n" $(SRC)
	@echo; echo "Binaries gerados em $(OBJ_DIR)/ :"
	@find $(OBJ_DIR) -maxdepth 2 -type f -executable -printf " - %p\n" || true

# Run por arquivo (ex: make run NAME=vetor)
# NAME deve ser o caminho relativo do .c sem .c, por exemplo: Alura/hello -> bin/Alura/hello
run:
ifndef NAME
	$(error NAME não definido. Ex: make run NAME=Alura/hello)
endif
	@exe="$(OBJ_DIR)/$(NAME)"; \
	if [ -x "$$exe" ]; then echo "Executando $$exe"; $$exe; else echo "$$exe não encontrado. Rode make ou make all"; exit 1; fi

# Test target simples (não interativo)
test: all
	@echo "Teste simples: compila ok"
	@echo "Veja bin/ para executáveis. Use make run NAME=<caminho-sem-.c> para rodar."

clean:
	@echo "Removendo binários..."
	@rm -rf $(OBJ_DIR)
