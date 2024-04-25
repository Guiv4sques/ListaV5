/*Escreva um programa que leia um número e exiba se ele é positivo ou negativo*/
#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    int num;

    printf("Digite o número: ");
    scanf("%d", &num);
   
   if (num < 0){
printf("\nO número é negativo!");
}
  else{
    printf("\nO número é positivo!");
}

    return 0;
}
