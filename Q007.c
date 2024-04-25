/*Solicitar a idade de uma pessoa em dias e informar na tela a idade em anos, meses e dias*/
#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    int age, anos, meses, dias;

    printf("Digite sua idade em dias: ");
    scanf("%d", &age);
    
    anos = age / 365;
    meses = (age % 365) / 30;
    dias = (age % 365) % 30;

    printf("\nVocê tem: %d anos, %d meses e %d dias", anos, meses, dias);

    return 0;
}
