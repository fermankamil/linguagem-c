#include<stdlib.h>
#include<stdio.h>
int main (){
	int minuto, hora, resposta;
	printf("> Por favor, digite as horas no formato de doze horas:");
	scanf("%d",&hora);
	printf("\n> Por favor, digite os minutos:");
	scanf("%d",&minuto);
	if(hora>12||minuto>60){
		printf("\n> Algum dos dados digitados nao eh valido!\n\n");
		system("pause");
		}
	else{
		printf("\n> Estamos antes ou depois do meio dia?\n\n\Antes - [1]\n\nDepois - [2]\n\n");
		scanf("%d",&resposta);
		if(resposta==1){;
			printf("\n> A hora eh: %d:%d.\n\n",hora, minuto);
		}
		else if(resposta==2){
			hora=hora+12;
			printf("\n> A hora eh: %d:%d.\n\n",hora, minuto);}
		else{
			printf("\n> Resposta invalida!\n\n");
		}
		system ("pause");
		}
	}