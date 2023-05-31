//Faça um programa que permita entrar com números e imprimir o quadrado de cada
//número digitado até entrar um número múltiplo de 6 que deverá ter seu quadrado
//impresso também.
//Resposta:
#include <stdio.h>
int main() {
 int numero;
 
while (1) {
 printf("Digite um número: ");
 scanf("%d", &numero);
 if (numero % 6 == 0) {
 int quadrado = numero * numero;
 printf("O número múltiplo e 6! \n");
 printf("O quadrado de %d é %d\n", numero, quadrado);
 
 } else {
 int quadrado = numero * numero;
 printf("O número %d não e múltiplo de 6 ! \n",numero);
 printf("O quadrado de %d é %d\n", numero, quadrado);
 break;
 
 }
}
return 0;
 
}