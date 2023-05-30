//Faça um programa que receba um número inteiro e verifique se este número é maior 
//que 20, em caso afirmativo o programa deverá multiplicar o valor por 2 e em caso 
//negativo deve multiplicar por 4. Após realizar o cálculo o programa deve imprimir a
//mensagem: "Resultado: <valor do resultado>", em que <valor do resultado> deve ser 
//substituído pelo resultado do cálculo.
//Resposta: 

#include <stdio.h>
int main() {
 
 int numero;
 
 printf("Digite um numero: ");
 scanf("%d", &numero);
 
 if(numero > 20){
 
 printf("O número digitado é maior que 20\n");
 
 numero = numero * 2;
 
 printf("Valor do resultado: %d", numero);
 }
 else {
 printf("O número digitado é menor que 20\n");
 
 numero = numero * 4;
 
 printf("Valor do resultado: %d", numero);
 }
 return 0;
}