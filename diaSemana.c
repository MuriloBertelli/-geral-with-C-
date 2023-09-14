/* PROGRAMA QUE ILUSTRA O USO DO TIPO ENUM (ENUMERAÇÃO). */
#include <stdio.h>
/* DOM=1 faz com que a enumeração comece em 1. */
enum diasSemana{DOM=1,SEG,TER,QUA,QUI,SEX,SAB};
/* *** Programa principal *** */
int main(){
int dia; /* Variável int: mesmo tipo dos elementos da enumeração. */
/* Vetor de strings inicializado com os nomes dos dias. */
/* Primeiro índice em aberto ([]): ajusta conforme quantidade de */
/* strings contidos entre as chaves. */
/* Segundo índice definido ([8]): tamanho máximo de cada string: */
/* 7 (tamanho máximo do texto) + 1 (\0: caractere de finalização). */
/* O "" (com índice 0) ajusta os índices de nomeDia com os índices */
/* de diasSemana: 1-Domingo, 2-Segunda, 3-Terca etc. */
char nomeDia[][8]={"","Domingo","Segunda","Terca","Quarta",
"Quinta","Sexta", "Sabado"};
for(dia=DOM;dia<=SAB;dia++)
printf("%d - %s\n",dia,nomedia[dia]);
}