#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int contador,posicao;
	char palavra[25];
	printf("> Coeh, meu mano! Digita uma palavrinha pra noiz ae:");
	gets(palavra);
	for(contador=0,posicao=0;palavra[posicao]!='\0';++posicao){
		if(palavra[posicao]=='a' || palavra[posicao]=='A'){
			++contador;
			palavra[posicao]='b';
		}
	}
	printf("> Bom, %d letras foram modificadas e agora a palavra virou essa nojeira aqui: %s",contador,palavra);
}
