//Faça um programa que leia a idade de duas pessoas e imprima a soma das idades

#include <stdio.h>
int main ()
{
int idade1, idade2, soma;
  
printf("Escreva a idade 1\n");
scanf("%d", &idade1);
printf("Escreva a idade 2\n");
scanf("%d", &idade2);
soma = idade1 + idade2;
printf ("A soma das idades é: %d", soma);


  return 0;
}