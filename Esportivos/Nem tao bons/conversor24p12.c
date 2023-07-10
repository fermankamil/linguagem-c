#include<stdlib.h>
#include<stdio.h>
int main (){
	int minuto, hora, resposta;
	printf("> Por favor, digite as horas no formato de vinte e quatro horas:");
	scanf("%d",&hora);
	printf("\n> Por favor, digite os minutos:");
	scanf("%d",&minuto);
	if(hora>24||minuto>=60){
		printf("\n> Algum dos dados digitados nao eh valido!\n\n");
		system("pause");
		}
	else{
		if(hora>12){
			printf("\n> A hora eh %d:%d PM.\n\n",hora-12, minuto);
		}
		else{
			printf("\n> A hora eh %d:%d AM.\n\n",hora, minuto);
		}
		system("pause");
	}
}