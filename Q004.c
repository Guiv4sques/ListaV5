/*Dado os três lados de um triângulo determinar o perímetro do mesmo*/
#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    float l1, l2, l3, peri;

    printf("Digite o tamanho do lado 1: ");
    scanf("%f", &l1);
    printf("Digite o tamanho do lado 2: ");
    scanf("%f", &l2);
    printf("Digite o tamanho do lado 3: ");
    scanf("%f", &l3);

    peri = l1 + l2 + l3;

    printf("\nO perímetro do triângulo é: %.2f", peri);

    return 0;
}
