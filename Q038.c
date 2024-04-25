/*Chama-se ano bissexto o ano ao qual é acrescentado um dia extra, ficando ele com 366 dias, um dia a mais do que os anos normais de 365 dias, ocorrendo a cada quatro anos.
Escreva um programa que verifique se um ano é bissexto. Um ano é bissexto se ele é divisível por 4.
Entretanto, se o ano é divisível por 100, ele não é bissexto.
Mas, se ele for divisível por 400, ele volta a ser bissexto.
a.  São bissextos os anos: 1600, 1996, 2000, 2004, 2008, 2012, 2016, 2400, 2800, ...
b.  Não são bissextos: 1500, 1974, 1982, 1983, 1990, 2018, 2022, 2030, 2038, …*/
#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    int ano, bis1, bis2;
    
    printf("Digite um ano: ");
    scanf("%d", &ano);
    
    bis1 = (ano % 100);
    bis2 = (ano % 400);
    
    switch(bis1){
       case 0 : printf("\nO ano não é bissexto"); break;
   }
   switch(bis2){
       case 0 : printf("\nO ano é bissexto"); break;
   }
    
    return 0;
}
