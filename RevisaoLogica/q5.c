//Faça um programa que leia dois valores informados pelo usuário e inverta os valores nas variáveis lidas sem utilizar variável auxiliar

#include <stdio.h>
int main (){
int a, b;
  
printf("Escreva o valor 1\n");
scanf("%d", &a);
printf("Escreva o valor 2\n");
scanf("%d", &b);
b = b + a;
a = b - a;
b = b - a;
printf ("Os valores invertidos são: %d e %d", a, b);


  return 0;
}