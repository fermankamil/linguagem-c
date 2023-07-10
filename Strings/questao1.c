#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char palavraum[25],palavradois[25];
	printf("> Coeh, meu mano! Digita uma palavrinha pra noiz ae:");
	gets(palavraum);
	printf("> Valeu, valeu, campeao! Agora digita outra palavra:");
	gets(palavradois);
	printf("\n> A primeira palavra digitada foi: %s.\n> A segunda letra dessa palavra eh: %c.\n\n",palavraum,palavraum[1]);
	printf("> A segunda palavra digitada foi: %s.\n> A segunda letra dessa palavra eh: %c.\n\n",palavradois,palavradois[1]);
	system("pause");
}