/*Escreva um programa que leia o número equivalente ao mês e imprima a quantidade de dias deste mês*/
#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    int num;

    printf("Digite o número equivalente a um mês: ");
    scanf("%d", &num);
   
   if (num == 1 || num == 5 || num == 7 || num == 8 || num == 10 || num == 12){
printf("\nEste mês possui 31 dias");
}
   if (num == 3 || num == 4 || num == 9 || num == 11){
printf("\nEste mês possui 30 dias");
}
  if (num == 2 || num == 6){
printf("\nEste mês possui 29 dias");
}
  if (num > 12 || num <= 0){
printf("\nDigite um número válido (1 - 12)!");
}

    return 0;
}
