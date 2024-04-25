/*Dado o tamanho do raio de uma circunferência, calcular a área e o perímetro da mesma*/
#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    float r, area, peri;

    printf("Digite o tamanho do raio: ");
    scanf("%f", &r);
    area = 3.14 * (r * r);
    peri = (2 * 3.14) * r;

    printf("\nA área da circunferência é: %.2f", area);
    printf("\nO perímetro da circunferência é: %.2f", peri);

    return 0;
}
