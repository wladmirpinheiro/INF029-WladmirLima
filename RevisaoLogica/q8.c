//Faça um programa que calcula o fatorial de um número

#include <stdio.h>
int main (){
  
	int num;
	int fat;
	int x;
	
	printf("Escreva um número para calcular seu fatorial\n");
	scanf("%d", &num);

	fat = 1;
	for(x = num; x >= 1; x = x - 1) {
	fat = fat * x;
	}

	printf("\nO fatorial do número é %d", fat);
  
  
  return 0;
}