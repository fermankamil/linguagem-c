#include <stdio.h>
#include <stdlib.h>
int main (){
	int n, r, m, c, d, u, c2, d2;
	printf("Por favor digite o numero do qual deseja saber a soma dos algarismos centrais:");
	scanf("%i",&n);
	if (n<=9999){
		//separação das casas decimais
		m=n/1000;
		c=n%1000;
		d=c%100;
		u=d%10;
		/*Exemplo: se a entrada for 8698
		m=8
		c=698
		d=98
		u=8*/
		//dividindo as casas decimais 
		c2=c/100;
		d2=d/10;
		/*Exemplo: se a entrada for 8698
		c2=6
		d2=9*/
		r= c2+d2;
		printf("\nO resultado da soma dos numeros principais eh igual a %i:\n",r);
		system("pause");
 		return 0;
	}
	else{
	printf("Porra menor, ce digitou um numero nada a ver!");
	}
	}