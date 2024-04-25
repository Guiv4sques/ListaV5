/*Um posto está vendendo combustíveis com a seguinte tabela de descontos:

Álcool: Até 25 litros, desconto de 2% por litro | Acima de 25 litros, desconto de 4% por litro
Gasolina: Até 25 litros, desconto de 3% por litro | Acima de 25 litros, desconto de 5% por litro

Escreva um algoritmo que leia o número de litros vendidos e o tipo de combustível (codificado da seguinte forma: A-álcool, G-gasolina),
calcule e imprima o valor a ser pago pelo cliente sabendo-se que o preço do litro da gasolina é R$ 2,70 e o preço do litro do álcool é R$ 1,90.*/
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    float l, desc, result;
    char C;
    
    printf("Digite a quantidade de combustível em litros: ");
    scanf("%f", &l);
    printf("\nDigite o tipo de combustível que deseja:\nA-álcool\nG-gasolina\n");
    scanf("\n%c", &C);
    
    if(C == 'A' || C == 'a'){
        if(l >= 1 && l <= 25){
           desc = ((1.90 / 100) * 2) * l;
           result = l * 1.90 - desc;
           printf("\nO valor a ser pago é: R$%.2f", result);
        }
        else if(l >= 26){
           desc = ((1.90 / 100) * 4) * l;
           result = l * 1.90 - desc;
           printf("\nO valor a ser pago é: R$%.2f", result);
        }
    }
    if(C == 'G' || C == 'g'){
        if(l >= 1 && l <= 25){
           desc = ((2.70 / 100) * 3) * l;
           result = l * 2.70 - desc;
           printf("\nO valor a ser pago é: R$%.2f", result);
        }
        else if(l >= 26){
           desc = ((2.70 / 100) * 5) * l;
           result = l * 2.70 - desc;
           printf("\nO valor a ser pago é: R$%.2f", result);
        }
    }
   
    return 0;
}
