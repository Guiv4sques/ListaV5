/*Escreva um programa que permute o valor de duas variáveis inteiras*/
#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    int num1, num2, x1, x2;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
   
   x1 = num1;
   x2 = num2;
   num1 = x2;
   num2 = x1;
   
    printf("\nOs números permutados são: %d e %d", num1, num2);

    return 0;
}
