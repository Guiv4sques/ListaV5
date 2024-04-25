/*Escreva um programa que leia 3 números e calcule a média ponderada entre eles. Considere que o maior número recebe peso 5 e os outros dois recebem peso 2,5*/
#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    int num1, num2, num3;
    float a, b, c, d;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    printf("Digite o terceiro número: ");
    scanf("%d", &num3);
   
   if (num1 > num2 && num1 > num3){
a = num1 * 5;
}
else{
    a = num1 * 2.5;
}
  if (num2 > num1 && num2 > num3){
b = num2 * 5;
}
else{
    b = num2 * 2.5;
}
  if (num3 > num1 && num3 > num2){
c = num3 * 5;
}
else{
    c= num3 * 2.5;
}

d = (a + b + c) / 3;

printf("\nA média é: %.2f", d);

    return 0;
