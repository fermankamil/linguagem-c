#include <Stdio.h>
#include<stdlib.h>
int main(void){
	int x,opcoes,sorteio=0;
	char tema[25];	
	printf("> Digite quantas opcoes nos temos:");
	scanf("%d",&opcoes);
	opcoes=opcoes-1;
	char escolhas[opcoes][100];
	for(x=0;x<=opcoes;++x){
		printf("\n> Digite a opcao de numero %d:",x+1);
		fflush(stdin);
		gets(escolhas[x]);	
	}
	srand((unsigned)time(NULL));
	sorteio=1+(rand()%opcoes);
	printf("\n> Ja temos a decisao sobre o tema!");
	printf("\n> A opcao sorteada foi a situacao de numero %d!",sorteio);
	printf("\n> O destino escolheu: %s.",escolhas[sorteio-1]);
}