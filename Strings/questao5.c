#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main (){
	char nome[50];
	int numero,letras;
	printf ("> Digite seu nome completo:");
	gets(nome);
	for(numero=0,letras=0;nome[numero]!='\0';++numero){
		if (nome[numero]!=' ')
			++letras;
	}
	printf("> O nome %s possui %d letras.\n\n",nome,letras);
	system("pause");
}