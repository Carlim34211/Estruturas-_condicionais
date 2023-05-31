//Faça um programa que leia "n" valores. O programa deve inicialmente solicitar ao
//usuário que informe a quantidade desejada de valores a ser informada, depois ler
//os "n" valores e ao final imprimir a média aritmética dos valores lidos.
//Resposta:
#include <stdio.h>
int main() {
 int n, i;
 float soma = 0;
 float media;
 
 printf("Informe a quantidade de valores a serem informados: ");
 scanf("%d", &n);
 printf("Digite %d valores:\n", n);
 for (i = 0; i < n; i++) {
 float valor;
 scanf("%f", &valor);
 soma += valor;
 }
 media = soma / n;
 printf("A média aritmética dos valores lidos é: %.2f\n", media);
 return 0;
}