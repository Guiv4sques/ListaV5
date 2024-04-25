/*Faça um algoritmo que calcule e apresente o valor do volume de uma lata de óleo, dado seu raio e sua altura.*/
#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    float r, h, vol;

    printf("Digite o tamanho do raio da lata: ");
    scanf("%f", &r);
    printf("Digite a altura da lata: ");
    scanf("%f", &h);

    vol = 3.14 * ((r * r) * h);
   
    printf("\nO volume da lata é: %.2f", vol);

    return 0;
}
