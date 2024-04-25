/*Escreva um programa que leia um número inteiro de 1 a 7 e informe o dia da semana correspondente, sendo domingo o dia de número 1.
Se o número não corresponder a um dia da semana, mostre uma mensagem de erro*/
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int num;
    
    printf("Digite um número: ");
    scanf("%d", &num);

    if (num >= 1 && num <= 7){
        if (num == 1){
            printf("\nDomingo");
        }else if (num == 2){
            printf("\nSegunda-Feira");
        }else if (num == 3){
            printf("\nTerça-Feira");
        }else if (num == 4){
            printf("\nQuarta-Feira");
        }else if (num == 5){
            printf("\nQuinta-Feira");
        }else if (num == 6){
            printf("\nSexta-Feira");
        }else if (num == 7){
            printf("\nSábado");
        }
    }else{
        printf("\n\nERRO!");
    }

    return 0;
}
