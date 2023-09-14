/* PROGRAMA QUE LÊ UM VETOR DE INTEIROS E O COLOCA EM
ORDEM CRESCENTE DE VALORES PELO MÉTODO DA SELEÇAO. */
#include <stdio.h>
/* *** Função do usuário *** */
/* Como é apenas uma função, e definida antes do programa principal,
não há necessidade de um protótipo. */
void troca(int *x, int *y){ /* Troca os valores entre *x e *y. */
int t;
t=*x;
*x=*y;
*y=t;
}

/* *** Program principal *** */
int main(){
int j,k,n, /* j,k: variáveis de controle (método da seleção). */
/* n: tamanho a ser usado do vetor v. */
v[15]; /* Vetor de inteiros de tamanho máximo 15. */
/* Leitura do tamanho n do vetor v. */
printf("Digite o tamanho do vetor (<=15): "); scanf("%d",&n);
/* Leitura do vetor. */
printf("Digite os %d elementos do vetor de inteiros: ",n);
for(k=0;k<n;k++)
scanf("%d",&v[k]);
/* Impressão do vetor lido. */
printf("Vetor lido:\n");
for(k=0;k<n-1;k++)/* Último elemento tem formatação diferente. */
printf("v[%d]=%d; ",k,v[k]);
printf("v[%d]=%d.\n",n-1,v[n-1]);

/* Ordenação pelo método da seleção. */
for(j=0;j<n-1;j++)
for(k=j+1;k<n;k++)
if(v[k]<v[j])
troca(&v[k],&v[j]);
/* Impressão do vetor ordenado. */
printf("Vetor ordenado:\n");
for(k=0;k<n-1;k++)
printf("v[%d]=%d; ",k,v[k]);
printf("v[%d]=%d.",n-1,v[n-1]);
}