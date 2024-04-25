/*Uma financeira usa o seguinte critério para conceder empréstimos:
o valor total do empréstimo deve ser até dez vezes o valor da renda mensal do solicitante e o valor da prestação deve ser no máximo 30% da renda mensal do solicitante.
Escreva um programa que leia a renda mensal de um solicitante, o valor total do empréstimo solicitado e o número de prestações que o solicitante deseja pagar e informe se o empréstimo pode ou não ser concedido.*/
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    float vmen, emp, pres, vm;
    
    printf("Digite o valor da sua renda mensal: ");
    scanf("%f", &vmen);
    printf("\nDigite o valor do empréstimo: ");
    scanf("%f", &emp);
    printf("\nDigite o número de prestações que deseja pagar: ");
    scanf("%f", &pres);
    
    vm = emp / pres;
    
    if (emp <= (vmen * 10) && vm <= ((vmen / 100) * 30)){
        printf("\n\nEmpréstimo pode ser realizado!");
    }else{
        printf("\n\nEmpréstimo não pode ser realizado!");
    }

    return 0;
}
