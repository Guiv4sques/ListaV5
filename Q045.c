/*Escreva um programa que leia 5 números, e imprima a média entre eles*/
#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");
    int num1, num2, num3, num4, num5, media;
    
    printf("Escreva cinco números: ");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
 
    media = (num1 + num2 + num3 + num4 + num5) / 5;
    
    printf("\nA média é: %d", media);

    return 0;
}
