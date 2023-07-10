#include <stdio.h>
#include <stdlib.h>
int main(void){
	int f1=0, f2=0, f3=0, n1=0, n2=0, n3=0, n4=0, n5=0, c1=0, c2=0, c3=0, c4=0;
	printf("> Digite o primeiro intervalo numerico: ");
	scanf("%i", & f1);
	printf("> Digite o segundo intervalo numerico: ");
	scanf("%i", & f2);
	printf("> Digite o terceiro intervalo numerico: ");
	scanf("%i", & f3);
	printf("> Digite o primeiro numero: ");
	scanf("%i", & n1);
	printf("> Digite o segundo numero: ");
	scanf("%i", & n2);
	printf("> Digite o terceiro numero: ");
	scanf("%i", & n3);	
	printf("> Digite o quarto numero: ");
	scanf("%i", & n4);
	printf("> Digite o quinto numero: ");
	scanf("%i", & n5);

	if(f3> f2 && f2 > f1){
		if(n1 < f1)
			++c1;
		if(n2 < f1)
			++c1;
		if(n3 < f1)
			++c1;
		if(n4 < f1)
			++c1;
		if(n5 < f1)
			++c1;
		
		if(n1 >= f1 && n1 < f2)
			++c2;
		if(n2 >= f1 && n2 < f2)
			++c2;
		if(n3 >= f1 && n3 < f2)
			++c2;
		if(n4 >= f1 && n4 < f2)
			++c2;
		if(n5 >= f1 && n5 < f2)
			++c2;
		
		if(n1 >= f2 && n1 < f3)
			++c3;
		if(n2 >= f2 && n2 < f3)
			++c3;
		if(n3 >= f2 && n3 < f3)
			++c3;
		if(n4 >= f2 && n4 < f3)
			++c3;
		if(n5 >= f2 && n5 < f3)
			++c3;
			
		if(n1 >= f3)
			++c4;
		if(n2 >= f3)
			++c4;
		if(n3 >= f3)
			++c4;
		if(n4 >= f3)
			++c4;
		if(n5 >= f3)
			++c4;
			
		printf("\n> Na faixa 1 apareceram %i numeros.\n\n", c1);
		printf("> Na faixa 2 apareceram %i numeros.\n\n", c2);
		printf("> Na faixa 3 apareceram %i numeros.\n\n", c3);
		printf("> Na faixa 4 apareceram %i numeros.\n\n", c4);
	}
	else{
		printf("> Os numeros devem ser digitados em ordem crescente!");
	}
}