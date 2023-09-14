/* *** Descrição do programa *** */
/* Este programa calcula a hipotenusa c de um triângulo
retângulo dados os dois outros lados (catetos a e b) usando
o teorema de Pitágoras. Ele também calcula a área do círculo
circunscrito ao triângulo retângulo (diâmetro c, centro no
meio da hipotenusa).
Autor: João Fulano Silva
Data de criação: 23/11/2021
Data de revisão: - */
/* *** Inclusão de bibliotecas *** */
#include <stdio.h> /* Para usar scanf() e print(f). */
#include <math.h>  /* Para usar a função matemática sqrt()
(raiz quadrada). */
/* *** Definição de constantes *** */
#define PI 3.1416
/* *** Protótipo de funções *** */
/* O protótipo de uma função, que é apenas o seu cabeçalh, permite
que ela possa ser escrita em qualquer parte do programa, mesmo
após o ponto onde ela é chamada pela primeira vez. */
double hipotenusa(double a, double b);
double areaCirculo(double d);
double areaSquare(double l);
unsigned long long fatorial(int num);
/* *** Programa principal *** */
int main()
{
    int n;
    double a, b, c, A; /* Catetos: a, b; hipotenusa: c;
       Área do círculo: A.*/
    /* Entrada dos catetos. */
    printf("Digite os catetos a e b: ");
    printf("Digite um valor inteiro n: ");
    scanf("%d", &n);
    scanf("%lf %lf", &a, &b);
    /* Cálculo: hipotenusa do triângulo e área do círculo. */
    c = hipotenusa(a, b);
    A = areaCirculo(c);
    // Calculo da area do quadrado.
    double ladoQuadrado = c;
    double areaQuadrado = areaSquare(ladoQuadrado);
    /* Apresentação dos resultados. */
    printf("Tabela de fatoriais até %d:\n", n);
    for (int i = 0; i <= n; i++)
    {
        printf("%d! = %llu\n", i, fatorial(i));
        printf("Hipotenusa ......: %.3lf\n", c);
        printf("Area do circulo .: %.3lf\n", A);
        printf("Area do quadrado...: %.3lf\n", areaQuadrado);

        return 0;
    }
}
/* *** Funções do usuário. ***
/* Função que calcula a hipotenuse de um triângulo retângulo
dados seus catetos a e b.
Autor: João Silva
Data de criação: 23/11/2021
Data de revisão: - */
double hipotenusa(double a, double b)
{
    return sqrt(a * a + b * b);
}
/* Função que calcula a área de um círculo dado seu diâmetro.
Autor: João Silva
Data de criação: 23/11/2021
Data de revisão: - */
double areaCirculo(double d)
{
    return PI * d * d / 4;
}
// função para alculo da are do quadrado
double areaSquare(double b)
{
    return b * b;
}
// função para n fatoriais.
unsigned long long fatorial(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        unsigned long long result = 1;
        for (int i = 2; i <= num; i++)
        {
            result *= i;
        }
        return result;
    }
}