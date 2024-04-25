/*Em uma cidade se deseja sincronizar os semáforos.
Com isto, quando um semáforo abre (fica verde), os veículos que nele estavam parados tendem a encontrar os próximos semáforos também abertos.
Para que isto seja feito, os próximos semáforos precisam abrir um pouco depois, dependendo da velocidade permitida na via e da distância entre eles.
Assim, ao abrir o semáforo, um veículo começa a acelerar até atingir a velocidade permitida, que mantém até chegar ao próximo semáforo, levando um certo tempo para percorrer essa distância.
Para que encontre o próximo semáforo aberto, este deve abrir um pouco antes da chegada do veículo (por ex: 3 segundos antes). Faça assim um algoritmo que informe quanto tempo depois um semáforo deve abrir,
dada as seguintes informações:
1- a distância desde o semáforo anterior
2- a velocidade permitida da via
3- a aceleração típica dos carros*/
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    float a, b, c, v;

    printf("Digite a distância desde o semáforo anterior em metros: ");
    scanf("%f", &a);
    printf("Digite a velocidade permitida na via em Km/h: ");
    scanf("%f", &b);
    printf("Digite a aceleração típica dos carros em m/s: ");
    scanf("%f", &c);

   v = sqrt((2*a)/ c);

   printf("\nValor de “v” é: %f", v);
   printf("\nO próximo semáforo deve abrir %.2f depois", v-3);

    return 0;
}
