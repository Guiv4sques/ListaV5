/*Dado o tamanho do lado de um quadrado, calcular a área e o perímetro do mesmo*/
#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    float l, area, peri;

    printf("Digite o tamanho do lado: ");
    scanf("%f", &l);
    area = l * l;
    peri = l * 4;

    printf("\nA área é: %.2f", area);
    printf("\nO perímetro é: %.2f", peri);

    return 0;
}
