# include <stdlib.h>
# include <stdio.h>
# include <string.h>

int main(){
	int limite = 0, x = 0, contador, repe = 0;
	char nome[50],resposta[4];
	printf("> Sobre o que eh a lista que iremos fazer?: ");
	fflush(stdin);
	fgets(nome, 50, stdin);
	short pos = strcspn(nome, "\n");
	nome[pos] = '\0';
	printf("\n> Digite o numero de linhas que deseja utilizar: ");
	scanf("%d", & limite);
	printf("\n");
	if(limite > 0 && limite < 1000){
		char lista[limite - 1][255];
		for (x = limite - 1, limite = 0;limite <= x; ++limite){
			if(limite < 9){
				printf("> Digite o item numero 0%d:", limite + 1);
			}
			else{
				printf("> Digite o item numero %d:", limite + 1);
			}
			fflush(stdin);
			fgets(lista[limite], 255, stdin);
		}
		for(repe = 0; repe == 0;){
			printf("\n> Deseja que todas as primeiras letras sejam maiusculas?: ");
			fflush(stdin);
			gets(resposta);
			if(resposta[0] == 's' || resposta[0] == 'S'){
				for(limite = 0; limite <= x; ++limite){
					for(contador = 0;lista[limite][contador] != '\0'; ++contador){
						if (lista[limite][0] >= 97 && lista[limite][0] <= 122)
							lista[limite][0] = lista[limite][0] - 32;				
						if((lista[limite][contador] ==' ') && (lista[limite][contador + 1] >= 97 && lista[limite][contador + 1] <= 122))
							lista[limite][contador + 1] = lista[limite][contador + 1] - 32;	
						if(lista[limite][contador] == ' ' && lista[limite][contador + 1] == '\0')
							lista[limite][contador] = lista[limite][contador + 1];
						}
					}
					++repe;
					}	
			else if(resposta[0] =='n' || resposta[0] =='N'){
				printf("> Compreensível, tenha um bom dia!");
				++repe;
			}
			else{
				continue;
			}
		}
		--limite;
		printf("\n-------- %s --------\n\n",nome);
		for(x = 0; x < limite + 1; ++x){
			if(x < 9){
				printf("0%d - %s.\n\n", x + 1, lista[x]);
			}
			else{
				printf("%d - %s.\n\n", x + 1, lista[x]);
			}
		}
		printf("* Feito usando o fazedor de listas de Rafael Mota!\n\n");
	}
	system ("pause");
}