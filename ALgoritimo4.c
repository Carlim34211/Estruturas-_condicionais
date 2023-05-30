//Um escritório de contabilidade, está realizando o reajuste do salário dos funcionários 
//de todos os seus clientes. Para isso, estão utilizando como referência oreajuste
//acordado com os sindicatos de cada classe trabalhadora, conforme apresentado na 
//tabela a seguir. Para ajudar o escritório nesta tarefa, faça um programa que receba 
//o salário atual, o cargo conforme especificado na tabela a seguir e realize o cálculo 
//do reajuste do salário. Ao término do cálculo o programa deve imprimir o valor do
//reajuste e o novo salário do funcionário.
//Resposta:
#include <stdio.h>
int main(){
float salárioA;
int cargo;
printf("Informe salário atual:\n");
scanf("%f",&salárioA);
printf("1 - Auxiliar de escritório\n");
printf("2 - Secretário\n");
printf("3 - Cozinheiro\n");
printf("4 - Entregador\n");
printf("Informe seu cargo autal:\n");
scanf("%d",&cargo);
float reajuste;
if (cargo==1)
{
 printf("Auxiliar de escritório \n");
 reajuste =salárioA * 0.07;
}
else if (cargo==2)
{
 printf("Secretário \n ");
 reajuste = salárioA *0.09;
}
else if (cargo==3)
{
 printf("Cozinheiro \n ");
 reajuste = salárioA *0.05;
}
else if (cargo==4)
{
 printf("Cozinheiro \n ");
 reajuste = salárioA * 0.12;
}
float salarioatual = salárioA+ reajuste;
printf("Valor do reajuste:%.2f\n",reajuste);
printf("Salário reajustado:%.2f\n",salarioatual);
 return 0;
}