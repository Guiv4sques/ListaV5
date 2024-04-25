/*Escreva um programa para gerar o invertido de um número com três algarismos (exemplo: o invertido de 498 é 894)*/
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    
    int num, a, b, c;
    
    printf("Digite um número com três algarismos: ");
    scanf("%d", &num);
    
    a = num % 10;
    b = num % 100 / 10;
    c = num / 100;
    
    printf("O inverso deste número é: %d%d%d", a, b, c);

    return 0;
}
