/*Escreva um programa que leia um número e exiba o seu módulo*/
#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    int num, mod;

    printf("Digite o número: ");
    scanf("%d", &num);
   
   if (num < 0){
mod = num * -1;
printf("\nO módulo do número é: %d", mod);
}
  else{
  printf("\nO módulo do número é: %d", num);
}
    return 0;
}
