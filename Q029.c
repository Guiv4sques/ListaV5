/*Escreva um programa que calcula o desconto previdenciário de um funcionário.
Dado um salário, o programa deve retornar o valor do desconto proporcional ao mesmo.
O cálculo segue a regra: o desconto é de 11% do valor do salário, entretanto, o valor máximo de desconto é 334,29, o que seja menor.*/
#include <stdio.h>
#include<locale.h>

int main (){
    setlocale (LC_ALL, "");
    float sal, desc, result;
    
    printf("Digite o valor do seu salário: ");
    scanf("%f", &sal);
    
    desc = (sal / 100) * 11;
    
    if (desc > 334.29){
        result = sal - 334.29;
    }
    else{
        result = sal - desc;
    }
    
    printf("\n\nO seu salário com o desconto é: %.2f", result);
    
    return 0;
}
