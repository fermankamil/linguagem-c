#include<stdlib.h>
#include<stdio.h>

int main (){
	int vetor[10];
	int c1=0,x=0,l=9,contador=10;
	while(x<=9){
		printf("> Digite o valor da posicao %d do vetor:", c1);
		scanf("%d",&vetor[c1]);
		++c1;
		++x;
	}
	c1=0;
	x=0;
	while(l>0){
		while(c1<l){
			if(vetor[c1]>vetor[c1+1]){
				x=vetor[c1+1];
				vetor[c1+1]=vetor[c1];
				vetor[c1]=x;
		}
			++c1;
			}
		--l;
		c1=0;
	}
	printf("\n> Os numeros, em ordem crescente, sao:");
	while(contador>0){
		printf(" %d ",vetor[c1]);
		++c1;
		--contador;
	}
	printf("\n\n");
	system("pause");
}
