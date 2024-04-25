/*Escreva um programa que imprima todos os números pares do intervalo fechado de 1 a 100*/
#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");
    int num;
    
    num = 0;
    
    while(num < 100){
        num += 2;
        printf("%d\n", num);
    }

    return 0;
}
