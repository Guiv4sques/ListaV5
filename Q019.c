/*Escreva um programa que calcule a raiz de uma equação do primeiro grau*/
#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    int a, b, r;
    float x;

    printf("ax+b=0\n");
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor b: ");
    scanf("%d", &b);
    printf("\n%dx+%d=0", a, b);
    
    x = -b/a;
   
    printf("\n\nA raíz da equação é: %.2f", x);
    r = (a*x)+b;
    printf("\nProva real: %d * %.2f + %d = 0", a, x, b);
    
    return 0;
}
