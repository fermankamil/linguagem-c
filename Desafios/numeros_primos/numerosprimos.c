#include <stdio.h>
#include <stdlib.h>
int main(){
int limite,contador,numero,divisor=2,primo=0,repeticao=1;
	printf("> Digite quantos numeros primos deseja conhecer:");		
	scanf("%i",&limite);
	printf("> Os numeros primos, ate o limite digitado (%i) sao: ",limite);
	for(numero=1;contador<limite;++numero){			
		for (divisor=2;divisor<numero;++divisor){
			if(numero%divisor==0){
				primo=1;
				break;
			}
			else{	
				primo=2;
			}
		}	
		if((primo==2||numero==2) && (contador!=limite && contador!=limite-1)){
			printf("%i, ",numero);	
			++contador;
		}
		else if(primo==2 && contador==limite-1){
			printf("%i.",numero);
			++contador;
		}
	}	
}
		