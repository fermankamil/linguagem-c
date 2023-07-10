#include <stdio.h>
#include <stdlib.h>
int main(void){
	int a=0, b=0, c=0, c1, c2;
	printf("> Digite a posicao atual da traseira do carro A: ");
	scanf("%i", & a);
	printf("> Digite a posicao atual da traseira do carro B: ");
	scanf("%i", & b);
	printf("> Digite a posicao atual da traseira o carro C: ");
	scanf("%i", & c);
	if(c <= 500 && c > b && a>=0){
		c1 = b - a;
		c2 = c - b;
		if(c1 < c2)
			printf("\n1.");
		else if (c1 > c2)
			printf("\n-1");
		else if (c1 == c2)
			printf("\n0");
	}
	else
		printf("> Algum dos numeros digitados fugiu das restricoes! Tente novamente!");
}