//Imprime um vetor dado e imprima invertido 
#include <stdio.h>
int main(){
    int n, v[10], i;
    printf("Digite a quantida de números: (<=10)");
        scanf("%d",&n);
    printf("Digite os %d números: \n",n);
    for(i=0;i<n;i= i + 1)
        scanf("%d",&v[i]);
     printf("Sequencia invertida:\n");

    for(i=n-1;i>=0;i=i-1)
        printf("%d ",v[i]);
         
        
}
// void impVet(int v[], int n){
//     int i;
//     prinf("Vetor inverso: [");
//     for (i=0; i<n;i++)
//         printf("%d",v[i]);
//     prinf("]\n");    
// }