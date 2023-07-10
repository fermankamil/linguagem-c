# include <stdlib.h>
# include <stdio.h>
# define l 10

int main(){
	short vetor[10];
	for(short x = 0; x < l; ++x){
		printf("> Digite o valor da posicao %d do vetor: ", x + 1);
		scanf("%d", & vetor[x]);
	}
	for(short limite1 = l - 1, transicao = 0; limite1 > 0; --limite1){
		for(short limite2 = 0; limite2 < limite1; ++limite2){
			if(vetor[limite2] > vetor[limite2 + 1]){
				transicao = vetor[limite2 + 1];
				vetor[limite2 + 1] = vetor[limite2];
				vetor[limite2] = transicao;
			}
		}
	}
	printf("\n> Os numeros, em ordem crescente, sao:");
	for(short contador = 0; contador < 10; ++contador){
		printf(" %d ", vetor[contador]);
	}
	printf("\n\n");
	printf("\n%d\n", vetor[l]);
	system("pause");
}
