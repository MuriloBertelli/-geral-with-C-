# Geral with C

Repositório com exercícios e pequenos projetos em C (principalmente material do curso da Alura).
Arquivos estão espalhados por pastas — este README explica como compilar tudo rapidamente e como organizar se quiser deixar mais profissional.

## Conteúdo
- Vários arquivos `.c` com exercícios: `hello.c`, `vetor.c`, `fatorial.c`, etc.
- Algumas pastas: `Alura/`, `FOR/`, `while/`, `locaçãoMemoria/`
- Scripts úteis: `Makefile` (na raiz) que compila todos os `.c` em `bin/`.

## Como compilar
Recomendado: usar o Makefile incluído.

```bash
# compila todos os .c e coloca executáveis em bin/
make

# compilar em modo debug
make debug

# listar fontes e bins
make list

# executar um executável (ex: Alura/hello.c -> NAME=Alura/hello)
make run NAME=Alura/hello
.
├── src/            # todo código fonte (.c)
│   ├── alura/
│   ├── exercises/
│   └── utils/
├── examples/       # executáveis de exemplo ou entradas de teste
├── bin/            # binários gerados pelo Makefile
├── tests/          # inputs/outputs para testes automatizados
├── README.md
└── Makefile
