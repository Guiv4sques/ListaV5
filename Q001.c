/*Dado o tamanho da base e da altura de um retângulo, calcular a sua área e o seu perímetro.*/
#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    int b, h, area, peri;

    printf("Digite o tamanho da base: ");
    scanf("%i", &b);
    printf("Digite a altura: ");
    scanf("%i", &h);
    area = b * h;
    peri = b + h;

    printf("\nA área é: %i", area);
    printf("\nO perímetro é: %i", peri);

    return 0;
}
