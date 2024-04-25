/*Em uma certificação são feitos são feitos 5 exames (I, II, III, IV e V).
Escreva um programa que leia as notas destes exames e imprima a classificação do aluno, sabendo que a média é 70.
Classificação: 
A – passou em todos os exames;
B – passou em I, II e IV, mas não em III ou V; 
C – passou em I e II, III ou IV, mas não em V. Reprovado – outras situações.*/
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    float num1, num2, num3, num4, num5, med;
    
    printf("Digite a nota do exame I: ");
    scanf("%f", &num1);
    printf("Digite a nota do exame II: ");
    scanf("%f", &num2);
    printf("Digite a nota do exame III: ");
    scanf("%f", &num3);
    printf("Digite a nota do exame IV: ");
    scanf("%f", &num4);
    printf("Digite a nota do exame V: ");
    scanf("%f", &num5);
    

    if (num1 >= 70 && num2 >= 70 && num3 >= 70 && num4 >= 70 && num5 >= 70){
        printf("\n\nNota A!");
    }else if ((num1 >= 70 && num2 >= 70 && num4 >= 70) && (num3 < 70 || num5 < 70)){
        printf("\n\nNota B!");
    }else if ((num1 >= 70 && num2 >= 70 || num3 >= 70 || num4 > 70) && (num5 < 70)){
        printf("\n\nNota C!");
    }else{
        printf("\n\nReprovado!");
    }
    
    return 0;
}
