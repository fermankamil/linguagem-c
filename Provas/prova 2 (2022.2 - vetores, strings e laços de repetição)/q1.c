# include <stdio.h>
# include <stdlib.h>
int main(){
	int c = 0, oco = 0, pos[20], i = 0, j = 0;
	char palavra[50], frase[100];
	printf("> Digite uma frase: ");
	gets(frase);
	printf("> Digite uma palavra: ");
	gets(palavra);
	for(j = 0, c = 0; frase[c] != '\0'; ++c){
		if(frase[c] == palavra[j]){
			if(j == strlen(palavra) - 1){
				j = 0;
				oco++;
				pos[i] = c - (strlen(palavra) - 2);
				i++;
				j++;
				}
			else
				++j;
			}
		else if (j > 0 && frase [c] != palavra[j]){
				j = 0;
		}	
	}
	if(oco == 1){
		printf("> A palavra %s aparece %d vez na frase digitada.\n", palavra, oco);
		printf("> A ocorrencia foi na posicao: %d.", pos[0]);
	}
	else if(oco == 0)
		system("pause");
	else{
		printf("> A palavra %s aparece %d vezes na frase digitada.\n", palavra, oco);
		printf("> As ocorrencias foram nas posicoes: ");
		for(c = 0; c < i; ++c){
			if(i == 1)
				printf("%d.",pos[c]);
			else if(c == i-1)
				printf("e %d.",pos[c]);
			else
				printf("%d, ",pos[c]);
				
		}
	}	
}
