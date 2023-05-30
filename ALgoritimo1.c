//Faça um programa que receba um número inteiro e verifique se este número é maior 
//que 20, em caso afirmativo o programa deverá imprimir a mensagem: "Maior que 20".
//Resposta: 

#include <stdio.h>
int main() {
 
 int numero;
 
 printf("Digite um numero: ");
 scanf("%d", &numero);
 
 if(numero > 20){
 printf("O numero digitado e maior que 20");
 }
 return 0;
}