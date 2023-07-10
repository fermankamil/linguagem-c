#include<strings.h>
#include<stdio.h>
int main(){
	int  count,down,posicao[20],obs,comp,ocorrencias,pos;
	char frase[100],palavra[50];
	printf("Digite uma palavra:");
	gets(palavra);
	printf("Digite uma frase:");
	gets(frase);
	for(count=0;frase[count]!='\0';++count){
	}
	for(down=0;palavra[down]!='\0';++down){
	}
	for(obs=0;obs<=count;++obs){
		if(palavra[obs]==frase[obs])
			++comp;
		if(comp==down){
			++ocorrencias;
			comp=0;
			posicao[pos]=obs-(down-1);
			++pos;
		}
	}
	printf("A palavra %s aparece %d vezes na frase digitada.",palavra,ocorrencias);
	printf("As ocorrencias foram nas posicoes:");
	for(count=0;count<=pos;++count){
		printf("%d",posicao[count]);
	}
}