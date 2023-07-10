# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main(){
	int repeticao = 1;
	int contador, sort, sorteio, limitev, limiteh, x, y;
	char answer[10];
	
	while(repeticao == 1){
		contador = 0;
		sorteio = 0;
		x = 0;
		y = 0;
		
		printf("> Digite quantos nomes deseja gerar: ");
		scanf("%i", & limitev);
		printf("> Quantas letras cada nome deve ter?: ");
		scanf("%i", & limiteh);
		printf("\n");
		srand((unsigned)time(NULL));
		
		char nome[limitev - 1][limiteh];
		
		for(y = 0; y < limitev; ++y){
			for(x = 0; x < limiteh; ++x){
				for(sort = 0; sort < 1;){
					sorteio = 1 + (rand() % 122);
					if(sorteio >= 97 && sorteio <= 122){
						nome[y][x] = sorteio;
						++sort;
					}
				}
			}
		}
		for(y = 0; y < limitev; ++y){
			for(x = 0; nome[y][x] != '\0'; ++x){	
				if((nome[y][x - 1] != 'a' && nome[y][x - 1] != 'e' && nome[y][x - 1] != 'i' && nome[y][x - 1] != 'o' && nome[y][x - 1] != 'u') && (nome[y][x] != 'a' && nome[y][x] != 'e' && nome[y][x] != 'i' && nome[y][x] != 'o' && nome[y][x] != 'u')&&(nome[y][x + 1] != 'a' && nome[y][x + 1] != 'e' && nome[y][x + 1] != 'i'&& nome[y][x + 1] != 'o' && nome[y][x + 1] != 'u')){
				sorteio = 1 + (rand() % 4);
					switch(sorteio){
						case 1:
							nome[y][x] = 'a';
							break;
						case 2:
							nome[y][x] = 'e';
							break;
						case 3:
							nome[y][x] = 'i';
							break;
						case 4:
							nome[y][x] = 'o';
							break;
						case 5:
							nome[y][x] = 'u';
							break;				
					}
				}	
			}
		}
		for(y = 0; y < limitev; ++y){	
				nome[y][0] = nome[y][0]-32;
		}
		for(y = 0; y < limitev; ++y){
			if (y < 9) 
				printf("> Nome de numero 00%d: ", y + 1);
			else if (y < 99) 
				printf("> Nome de numero 0%d: ", y + 1);
			else
				printf("> Nome de numero %d: ", y + 1);
			for(x = 0; x < limiteh; ++x){
				printf("%c", nome[y][x]);
			}
			printf(".\n");	
		}
		printf("\n> Deseja rodar o codigo novamente?: ");
		scanf("%s",answer);
		if((answer[0] == 's' || answer[0] == 'S') && (answer[1] == 'i' && answer[2] == 'm' && answer[3] == '\0')){
			system("cls");
			continue;
		}	
		else if((answer[0] == 'n' || answer[0] == 'N') && (answer[1] == 'a' && answer[2] == 'o' && answer[3] == '\0')){
			printf("> Obrigado por utilizar o meu programa!");
			--repeticao;
			break;
		}
		else{
			system("cls");
		}
	}
}
