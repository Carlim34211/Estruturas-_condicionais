//Faça um programa que realize a soma de todos os valores inteiros de 1 a n, sendo
//que n deve ser informado pelo usuário.
//Resposta:
#include <stdio.h>
#include <locale.h>
int main() {
 setlocale(LC_ALL,"portuguesa");
 int n;
 int soma =0;
 printf("informe um numero inteiro:\n");
 scanf("%d",&n);
if (n>=0){
 printf("O numero e inteiro!\n");
for (int i = 1; i<= n ; i++){
 soma = soma + i;
}
}else if (n<0){
 for (int i = 1; i>= n ; i--){
 soma = soma + i;
}
}
printf("A soma dos valores de 1 a %d é %d\n",n,soma);
 return 0;
}