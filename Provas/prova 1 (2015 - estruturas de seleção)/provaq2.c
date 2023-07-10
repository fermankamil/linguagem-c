#include <stdlib.h>
#include <stdio.h>
int main (){
	int entrada, milhar, centena, dezena, unidade;
	printf("Cooeh menor, por favor digite a sua senha para que a testemos:");
	scanf("%i",&entrada);
	if (entrada>9999){
	printf("\nSao permitidas senhas de ate quatro digitos.\n");
	system("pause");
	return 0;
	}
	if(entrada<=9999){
		milhar=entrada/1000;
		centena=(entrada%1000)/100;
		dezena=(entrada%1000)%100/10;
		unidade=(entrada%1000)%100%10;
		if(milhar==centena && dezena && unidade)
		printf("\nA senha eh	formada	por algarismos iguais.\n");
		else if((centena==milhar+1) && (dezena==centena+1) && (unidade==dezena+1))
		printf("\nA senha eh formada por uma sequencia crescente.\n");
		else if((centena==milhar-1) && (dezena==centena-1) && (unidade==dezena-1))
		printf("\nA	senha eh formada por uma sequencia decrescente.\n");
		else
		printf("\nA senha digitada eh valida.\n");
		}
		system("pause");
		return 0;
}