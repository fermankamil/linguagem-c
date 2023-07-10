#include<stdlib.h>
#include<stdio.h>
int main(){
	float salario;
	printf("> Por favor, colaborador, nos diga o seu salario:");
	scanf("%f",&salario);
	if(salario<280){
		printf("\n> O seu salario atualmente eh: %.2f.\n\n> Foi aplicado um aumento de 20%%.\n\n> O valor do aumento sera: %.2f.\n\n> Apos o reajuste, ele sera: %.2f.",salario,(salario*20)/100,salario+(salario*20)/100);}	
	else if(salario>=280 && salario<=700){
		printf("\n> O seu salario atualmente eh: %.2f.\n\n> Foi aplicado um aumento de 15%%.\n\n> O valor do aumento sera: %.2f.\n\n> Apos o reajuste, ele sera: %.2f.",salario,(salario*15)/100,salario+(salario*15)/100);}
	else if(salario>700 && salario<=1500){
		printf("\n> O seu salario atualmente eh: %.2f.\n\n> Foi aplicado um aumento de 10%%.\n\n> O valor do aumento sera: %.2f.\n\n> Apos o reajuste, ele sera: %.2f.",salario,(salario*10)/100,salario+(salario*10)/100);}		
	else{
		printf("\n> O seu salario atualmente eh: %.2f.\n\n> Foi aplicado um aumento de 5%%.\n\n> O valor do aumento sera: %.2f.\n\n> Apos o reajuste, ele sera: %.2f.",salario,(salario*5)/100,salario+(salario*5)/100);}	

	printf("\n\n> Obrigado por utilizar nosso programa!\n\n");
	system("pause");
	
}