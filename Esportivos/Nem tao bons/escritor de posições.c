#include <stdlib.h>
#include <stdio.h>
int main(){
	int numero=1, limite=0;
	printf("> Digite o numero de linhas que deseja utilizar:");
	scanf("%i",&limite);
	printf("\n");
	while(numero<=limite){
		printf("%d - \n\n",numero);
	++numero;		
	}
	system ("pause");
}