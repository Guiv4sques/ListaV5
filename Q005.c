/*Ler um número inteiro e exibir o seu sucessor*/
#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    int num, suc;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    suc = num + 1;

    printf("\nO sucessor do número digitado é: %d", suc);

    return 0;
}
