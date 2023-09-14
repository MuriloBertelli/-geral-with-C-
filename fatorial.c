#include <stdio.h>
double fatorial (unsigned int n){

    double f=1;

    if (n<2)

        return f;
    else
        return n*fatorial(n-1);

}

int main(){ /* Gera tabela de fatoriais. */
    int k,n=10;
    printf("-----------\n");
    printf(" n n!\n");
    printf("-----------\n");
    for(k=0;k<=n;k++)
        printf("%2d %-8.0lf\n",k,fatorial(k));
}