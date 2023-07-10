# include <stdio.h>
# include <stdlib.h>
# include <strings.h>
int main (void){
	int cont, x, y;
	char frase[100];
	printf("> Ola! Sou sua assistente pessoal, Censora. Tambem sou conhecida como Victoria.\n");
	printf("> Por favor, humano, digite a frase que deseja censurar: ");
	fflush(stdin);
	gets(frase);
	for(x = 0; frase [x] != '\0'; ++x){
		if(frase [x] == 'a' || frase [x] == 'A'){
			frase [x] = '@';
		}
		else if (frase [x] == 'e' || frase [x] == "E"){
			frase [x] = '&';
		}
		else if (frase [x] == 'i' || frase [x] == 'I'){
			frase [x] = '1';
		}
		else if (frase [x] == 'o' || frase [x] == 'O'){
			frase [x] = '0';
		}
		else if (frase [x] == 'u' || frase [x] == 'U'){
			frase [x] = '#';
		}
	}
	printf("\n> A Frase, escrita de forma censurada, eh: ");
	puts(frase);
}