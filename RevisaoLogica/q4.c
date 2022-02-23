//Faça um programa que leia dois valores informados pelo usuário e inverta os valores nas variáveis lidas

#include <stdio.h>
int main (){
int a, b, aux;
  
printf("Escreva o valor 1\n");
scanf("%d", &a);
printf("Escreva o valor 2\n");
scanf("%d", &b);
aux = a;
a = b;
b = aux;
printf ("Os valores são: %d e %d", a, b);


  return 0;
}