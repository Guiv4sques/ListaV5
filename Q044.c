/*Escreva um programa que imprima todos os números de 1 até 100, inclusive, e a soma de todos eles*/
#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");
    int num, soma;
    
    num = 0;
    soma = 0;
    
    while(num < 100){
        num += 1;
        soma += num;
        printf("%d [%d]\n", num, soma);
    }

    return 0;
}
