/*Escreva um programa que leia um número e imprima se este número é ou não par*/
#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    int num;

    printf("Digite o número: ");
    scanf("%d", &num);
   
   if (num % 2 == 0){
printf("\nO número é par!");
}
  else{
  printf("\nO número é impar!");
}
    return 0;
}
