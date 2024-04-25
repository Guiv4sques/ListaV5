/*Uma Cia de pulverização utiliza avião para pulverizar lavouras. Os custos  de pulverização dependem do tipo de praga e da área a ser contratada conforme a tabela:
Tipo 1 – ervas daninhas R$ 50,00 por acre; Tipo 2 – gafanhotos R$ 100,00 por acre; 
Tipo 3 – broca R$ 150,00 por acre;
Tipo 4 – todos acima R$ 250,00 por acre.
Se a área a ser pulverizada for superior a 1000 acres, o fazendeiro tem um desconto de 5%.
Em adição, qualquer fazendeiro cujo custo for maior do que R$ 750,00 tem um desconto de 10% sobre o valor que ultrapassar os R$ 750,00.
Caso ambos os descontos se aplicam o da área é calculado antes. Fazer um algoritmo que leia: o tipo de pulverização (1 a 4) e área a ser pulverizada; e imprima o valor a ser pago.*/
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int tip;
    float area, cust, desca, descv, tot, result;
    
    puts("Escolha o tipo de pulverização:");
    printf(" Tipo 1\n Tipo 2\n Tipo 3\n Tipo 4\n ");
    scanf("%d", &tip);
    printf("\nDigite o tamanho da área a ser pulverizada: ");
    scanf("%f", &area);
    
    if (tip == 1){
        cust = 50;
    }else if (tip == 2){
        cust = 100;
    }else if (tip == 3){
        cust = 150;
    }else if (tip == 4){
        cust = 250;
    }
    
    tot = cust * area;
    
    if (area > 1000){
        desca = (tot / 100) * 5;
    }else{
        desca = 0;
    }
    if (tot > 750){
        descv = (tot / 100) * 10;
    }else{
        descv = 0;
    }
    
    result = (tot - desca) - descv;
        printf("\n\nO valor total é: %.2f", result);
    return 0;
}
