#include <stdio.h>

int soma = 0;
int main()
{
    for (int i = 1; i <= 100; i++)
    {
        soma = soma + i;
    }
    printf("A soma e %d", soma);
}