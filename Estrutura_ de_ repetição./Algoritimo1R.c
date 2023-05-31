//Faça um programa que leia 10 valores e ao final imprima a média aritmética dos
//valores lidos.
//Resposta:
#include <stdio.h>
int main() {
 
 int i;
 float soma = 0;
 float media;
 int valor;
 printf("Digite 10 valores:\n");
 scanf("%d", &valor);
 for (i = 1; i <= 10; i++) {
 soma += valor;
 }
 media = soma / 10;
 printf("A média aritmética dos valores lidos é: %.2f\n", media);
 return 0;
}