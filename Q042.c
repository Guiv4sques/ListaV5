/*Escreva um programa que imprima todos os números inteiros de 100 a 1 (em ordem decrescente)*/
#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");
    int num;
    
    num = 101;
    
    while(num > 1){
        num -= 1;
        printf("%d\n", num);
    }

    return 0;
}
