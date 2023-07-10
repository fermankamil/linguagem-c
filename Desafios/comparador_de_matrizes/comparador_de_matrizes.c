/*Faça um programa C que leia duas matrizes de
tamanho 3 x 3. Em seguida, compare os valores
das duas matrizes, nas respectivas posições, e
mostre quais números são iguais nas duas
matrizes, na mesma posição. Informe também a
posição*/
#include <stdio.h>
int main (){
	int matriz1[3][3],matriz2[3][3],coluna,linha;
	for(coluna=0;coluna<3;++coluna){
		for(linha=0;linha<3;++linha){
			printf("> [matriz 1] - Digite um numero para a linha %i da coluna %i:",linha+1,coluna+1);
			scanf("%i",&matriz1[linha][coluna]);
			}
		printf("\n");
	}	
	for(coluna=0;coluna<3;++coluna){
		for(linha=0;linha<3;++linha){
			printf("> [matriz 2] - Digite um numero para a linha %i da coluna %i:",linha+1,coluna+1);
			scanf("%i",&matriz2[linha][coluna]);
			}
		printf("\n");
	}	
	for(coluna=0;coluna<3;++coluna){
		for(linha=0;linha<3;++linha){
			if(matriz2[linha][coluna]==matriz1[linha][coluna]){
				printf("> O numero %d existe em ambas as matrizes na linha %d e coluna %d.\n", matriz1[linha][coluna],linha+1, coluna+1);					
			}
		}
	}	
}