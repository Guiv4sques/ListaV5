/*Ler dois números inteiros e exibir o quociente e o resto da divisão inteira entre eles*/
#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    int num1, num2, quo, res;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    
   quo = num1 / num2;
   res = num1 % num2;

    printf("\nO quociente da divisão entre eles é: %d", quo);
    printf("\nO resto da divisão entre eles é: %d", res);

    return 0;
}
