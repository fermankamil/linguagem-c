#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main (){
	char nome[50];
	printf ("> Digite seu nome completo:");
	gets(nome);
	puts(nome);
	printf ("\n> ReDigite seu nome completo:");
	scanf ("%s",&nome);
	puts(nome);
	system("pause");
}