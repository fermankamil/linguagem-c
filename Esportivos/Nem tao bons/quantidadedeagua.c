#include <stdio.h>
#include <stdlib.h>
int main(){
	float peso;
	printf("> Digite o seu peso e o diremos aproximadamente quantos litros de agua voce deve beber por dia:");
	scanf("%f",&peso);
	printf("\n> Dado o seu peso, a quantidade ideal de agua (em litros) que voce deve ingerir eh: %.2f.",(peso*35/1000));
	system("pause");
}