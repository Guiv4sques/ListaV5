/*Um circuito elétrico é composto de duas resistências R1 e R2 em paralelo, e ambas em sequência de uma resistência R3. Faça um algoritmo para calcular a resistência equivalente desse circuito*/
#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    float r1, r2, r3, parel, seque, result;

    printf("Digite o valor da Resistência 1: ");
    scanf("%f", &r1);
    printf("Digite o valor da Resistência 2: ");
    scanf("%f", &r2);
    printf("Digite o valor da Resistência 3: ");
    scanf("%f", &r3);

   parel = (r1 * r2) / (r1 + r2);
   result = parel + r3;
   
    printf("\nA resistência equivalente desse circuito é: %.2f", result);

    return 0;
}
