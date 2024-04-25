/*Escreva um programa que leia três números e mostre o maior entre eles*/
#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    int num1, num2, num3;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    printf("Digite o terceiro número: ");
    scanf("%d", &num3);
   
   if (num1 > num2 && num1 > num3){
printf("\nO maior número é: %d", num1);
}
   if (num2 > num1 && num2 > num3){
printf("\nO maior número é: %d", num2);
}
  if (num3 > num1 && num3 > num2){
printf("\nO maior número é: %d", num3);
}
  if (num1 == num2 && num2 == num3){
printf("\nNão há números maiores");
}

    return 0;
}
