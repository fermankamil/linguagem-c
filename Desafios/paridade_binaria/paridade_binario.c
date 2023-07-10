# include <stdio.h>
# include <stdlib.h> 

int main(){
	int exibe = 0;
	int paridade = 0;
	int valor = 0; 
	int retorno;
	int c32 = 0, c16 = 0, c8 = 0, c4 = 0, c2 = 0, c1 = 0; 
	printf("> Digite um valor em decimal: ");
	scanf("%d", & valor);
	if(valor >= 0 && valor <= 32){
		c1 = valor % 2;    // 40 r = 0 
		valor = valor / 2; // 20
		c2 = valor % 2;    // 20 r = 0
		valor = valor / 2; // 10
		c4 = valor % 2;    // 10 r = 0
		valor = valor / 2; // 5 
		c8 = valor % 2;    // 5 r = 1
		valor = valor / 2; // 4
		c16 = valor % 2;
		valor = valor / 2; 
		c32 = valor % 2;
		paridade = (c32 + c16 + c8 + c4 + c2 + c1) % 2;
		printf("> Valor em binario: %d%d%d%d%d%d.\n", c32, c16, c8, c4, c2, c1 );
		printf("> Paridade: %d.\n", paridade);
		if(paridade == 0){
			printf("> Valor em binario: %d%d%d%d%d%d0.\n", c32, c16, c8, c4, c2, c1 );
			retorno =  0 + c1 * 10 + c2 * 100 + c4 * 1000  + c8 * 10000 + c16 * 100000 + c32 * 1000000;
			exibe =  0 * 1 + c32 * 2 + c16 * 4 + c8 * 16 + c4 * 32 + c2 * 64 + c1 * 128;
		}
		else{
			printf("> Valor em binario: %d%d%d%d%d%d1.\n", c32, c16, c8, c4, c2, c1 );
			retorno =  1 + c1 * 10 + c2 * 100 + c4 * 1000  + c8 * 10000 + c16 * 100000 + c32 * 1000000;
			exibe =  1 * 1 + c32 * 2 + c16 * 4 + c8 * 16 + c4 * 32 + c2 * 64 + c1 * 128;		
		}
		printf("\n> Retorno: %d.", retorno);
		printf("\n> Decimal: %d.", exibe);
	}
	else{
		printf("> Numero invalido! Tente novamente!");
	}
}