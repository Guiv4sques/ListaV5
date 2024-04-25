/*Escreva um programa que receba um numero inteiro de 1 a 100 e mostre na tela o numero por extenso*/
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int num, d1, d2, d3;
    
    printf("Digite um número inteiro de um a cem: ");
    scanf("%d", &num);
    if(num <= 0 || num > 100){
        printf("\nVALOR INVÁLIDO!");
    }else{
        d3 = num % 10;
        d2 = (num / 10) % 10;
        d1 = (num / 100) % 10;
    }if (num == 100){
        printf("\nCem!");
    }if (d2 != 0){
        switch (d2){
            case 1:
            switch (d3){
                case 0:
                printf("\nDez!");
                break;
                case 1:
                printf("\nOnze!");
                break;
                case 2:
                printf("\nDoze!");
                break;
                case 3:
                printf("\nTreze!");
                break;
                case 4:
                printf("\nQuatorze!");
                break;
                case 5:
                printf("\nQuinze!");
                break;
                case 6:
                printf("\nDezesseis!");
                break;
                case 7:
                printf("\nDezesete!");
                break;
                case 8:
                printf("\nDezoito!");
                break;
                case 9:
                printf("\nDezenove!");
                break;  }
            break;
            case 2:
            printf("\nVinte!");
            break;
            case 3:
            printf("\nTrinta!");
            break;
            case 4:
            printf("\nQuarenta!");
            break;
            case 5:
            printf("\nCinquenta!");
            break;
            case 6:
            printf("\nSessenta!");
            break;
            case 7:
            printf("\nSetenta!");
            break;
            case 8:
            printf("\nOitenta!");
            break;
            case 9:
            printf("\nNoventa!");
            break;
        } }
    if (d3 > 0 && d2 > 0 && d1 > 1){
        printf("e");
    }if (d3 != 0 && d2 != 1){
        switch (d3){
            case 1:
            printf("\nUm!");
            break;
            case 2:
            printf("\nDois!");
            break;
            case 3:
            printf("\nTrês!");
            break;
            case 4:
            printf("\nQuatro!");
            break;
            case 5:
            printf("\nCinco!");
            break;
            case 6:
            printf("\nSeis!");
            break;
            case 7:
            printf("\nSete!");
            break;
            case 8:
            printf("\nOito!");
            break;
            case 9:
            printf("\nNove!");
            break; 
        }  }
    return 0;}
