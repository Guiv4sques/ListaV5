/*Escreva um programa que leia um caracter e diga se ele é uma vogal, consoante, número ou um símbolo (qualquer outro caracter, que não uma letra ou número)*/
#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    char letra;

    printf("Digite uma letra: ");
    scanf("%c", &letra);
    
   if (letra >= 'a' && letra <= 'z'){
   if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
       printf("\nUma vogal!");
}
   else{
       printf("\nUma consoante!");
   }
   }
   else if (letra >= '0' && letra <= '0'){
printf("\nUm numeral!");
}
  else{
printf("\nUm símbolo!");
}

    return 0;
}
