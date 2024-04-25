/*Faça um algoritmo para calcular a nota semestral de um aluno. A nota semestral é obtida pela média aritmética entre a nota de 2 bimestres. Cada nota de bimestre é composta por 2 notas de provas*/
#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    float ns, nb1, nb2, np1, np2, np3, np4;

    printf("Digite a nota da primeira prova do primeiro bimestre: ");
    scanf("%f", &np1);
    printf("Digite a nota da segunda prova do primeiro bimestre: ");
    scanf("%f", &np2);
    nb1 = (np1 + np2) / 2;
    printf("Média do primeiro bimestre: %.2f", nb1);

    printf("\n\nDigite a nota da primeira prova do segundo bimestre: ");
    scanf("%f", &np3);
    printf("Digite a nota da segunda prova do segundo bimestre: ");
    scanf("%f", &np4);
    nb2 = (np3 + np4) / 2;
    printf("Média do segundo bimestre: %.2f", nb2);
   
    ns = (nb1 + nb2) / 2;

    printf("\n\nA nota semestral é: %.2f", ns);

    return 0;
}
