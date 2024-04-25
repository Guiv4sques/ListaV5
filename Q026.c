/*Escreva um programa que leia 3 valores e escreva a soma dos 2 maiores*/
#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    int num1, num2, num3, a, b, c, d;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    printf("Digite o terceiro número: ");
    scanf("%d", &num3);
   
   if (num1 > num2 || num1 > num3){
a = num1;
}
   if (num2 > num1 || num2 > num3){
b = num2;
}
  if (num3 > num1 || num3 > num2){
c = num3;
}
  if (num1 == num2 && num2 == num3){
printf("\nNão há números maiores");
}

d = a + b + c;

printf("\n\nA soma dos maiores números é: %d", d);

    return 0;
}
