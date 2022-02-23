//Faça um programa que verifique se um número é primo

#include <stdio.h>
int main (){
  
int num, i;
    int cont = 0;
    int div = 0;
    
    printf("Escreva um número positivo: \n");
    scanf("%d", &num);
    
    for (i = 1; i <= num; i++) {
    if (num % i == 0) { 
     div++;
    }
  }
    
  if (div == 2)
    printf("O número %d é primo!", num);
  else
    printf("O número %d não é primo!", num);
  
  return 0;
}