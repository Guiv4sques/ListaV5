/*Dado que a fórmula para conversão de Fahrenheit para Celsius é C = 5/9 (F – 32), leu um valor de temperatura em Fahrenheit e exibi-lo em Celsius*/
#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    float C, F;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &F);

    C = (5.0 / 9.0) * (F - 32);
   
    printf("\nA temperatura em Celsius é: %.2f", C);

    return 0;
}
