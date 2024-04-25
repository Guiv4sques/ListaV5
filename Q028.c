/*Escreva um programa que leia uma letra e mostre se ela é vogal ou consoante*/
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
