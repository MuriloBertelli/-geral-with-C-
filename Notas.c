/* PROGRAMA QUE ILUSTRA O USO DE UMA VARIÁVEL DO TIPO STRUCT. */
#include <stdio.h>
#include <string.h> /* Para usar função de cópia de string strcpy().
*/
typedef struct dadosAluno{ /* Definição do tipo dadosAluno. */
char nome[40];
float nota[4], media;
char situacao[20];
} dadosAluno;

int main(){
int k, i; float media;
/* Vetor de structs: mini registro acadêmico. */
dadosAluno aluno[3];
/* Leitura dos dados dos alunos e definição da
média e situação. */
for(k=0;k<3;k++){
printf("Digite o nome do aluno %d:\n",k+1);
gets(aluno[k].nome);
printf("Digite quatro notas bimestrais do aluno %d:\n",k+1);
for(i=0;i<4;i++)
scanf("%f",&aluno[k].nota[i]);
getchar(); /* Limpa buffer para próximo scanf(). */


/* Cálculo da média */
media=0;
for(i=0;i<4;i++)
media=media+aluno[k].nota[i]/4;
aluno[k].media=media;
/* Definição da situação. */
if (media>=7)
strcpy(aluno[k].situacao,"Aprovado");
else if (media>=4)
strcpy(aluno[k].situacao,"Final");
else
strcpy(aluno[k].situacao,"Reprovado");
} /* fim for */


/* Impressão dos registros dos alunos. */
printf("--------------------------\n");
for(k=0;k<3;k++){
printf("Aluno...: %s\n",aluno[k].nome);
printf("Notas...: ");
for(i=0;i<4;i++)
printf("%.1f ",aluno[k].nota[i]);
printf("\nMedia...: %.1f\n",aluno[k].media);
printf("Situacao: %s\n",aluno[k].situacao);
printf("--------------------------\n");
}
}