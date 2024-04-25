/*Faça um algoritmo que transforme uma velocidade fornecida em m/s pelo usuário para Km/h. Para tal, multiplique o valor em m/s por 3,6*/
#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    float v, result;

    printf("Digite a velocidade em m/s: ");
    scanf("%f", &v);

    result = 3.6 * v;
   
    printf("\nA velocidade em Km/h é: %.2f", result);

    return 0;
}
