//Faça um programa que leia a idade de uma pessoa e informe de ela é de maior ou de menor. O programa deve repetir essa ação até que uma idade negativa seja informada

#include <stdio.h>
int main (){
int idade;
  
printf("Escreva sua idade\n");
scanf("%d", &idade);
if(idade >=18){
  printf("Você é maior de idade");
}
  else if (idade < 0){
    printf("Digite uma idade válida");
  }
  else{
    printf("Você é menor de idade");
  }
  
  return 0;
}