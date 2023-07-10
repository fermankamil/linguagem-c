#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void){
	int contador=0,counter=0,sorteio=0,sort=0,limite=0,repeticao=0;
	srand((unsigned)time(NULL));
	printf("> Qual eh o maximo de letras que cada nome deve ter?:");
	scanf("%i",& limite);
	printf("> Quantos nomes deseja gerar?:");
	scanf("%i",& repeticao);
	char nome[repeticao-1][limite];
	for(contador=0;contador<repeticao;++contador){
		for(counter=0;counter<limite;counter++){
			for(sort=0;sort<1;){
				sorteio=10+(rand()%122);
				if(sorteio>=97 && sorteio<=122){
					nome[contador][counter]=sorteio;
					++sort;
				}
				else
					continue;
			}
		}
	}
	for(contador=0;contador<repeticao;++contador){
		for(counter=0;counter<limite;++counter){
			if(counter>0){
				if((nome[contador][counter-1]!='a' && nome[contador][counter-1]!='e' && nome[contador][counter-1]!='i' && nome[contador][counter-1]!='o' && nome[contador][counter-1]!='u')&&(nome[contador][counter]!='a' && nome[contador][counter]!='e' && nome[contador][counter]!='i' && nome[contador][counter]!='o' && nome[contador][counter]!='u')&&(nome[contador][counter+1]!='a' && nome[contador][counter+1]!='e' && nome[contador][counter+1]!='i'&& nome[contador][counter+1]!='o'&& nome[contador][counter+1]!='u')){
					sorteio=1+(rand()%5);
					switch(sorteio){
						case 1:
							nome[contador][counter]='a';
							break;
						case 2:
							nome[contador][counter]='e';
							break;
						case 3:
							nome[contador][counter]='i';
							break;
						case 4:
							nome[contador][counter]='o';
							break;
						case 5:
							nome[contador][counter]='u';
							break;				
					}
				}
			}
		}
	}
	for(contador=0;contador<repeticao;++contador){
		if(nome[contador][0]>=97 && nome[contador][0]<=122)	
			nome[contador][0]=nome[contador][0]-32;
	}
	for(sorteio=0;sorteio<repeticao-1;++sorteio){
		printf("> Nome de numero %d: %s.\n",sorteio,nome[sorteio]);
	}
}