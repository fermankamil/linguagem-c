#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int contador,posicao;
	char nome[5][25];
	for(contador=1,posicao=1;contador<=5;++posicao,++contador){
		printf("> Digite o nome de numero %d:",posicao);
		gets(nome[posicao]);
	}
	printf("\n");
	for(posicao=1,contador=1;contador<=5;++posicao,++contador){
		printf("> O nome armazenado na posicao %d eh: %s.\n",posicao, nome[posicao]);
	}
	








	
}