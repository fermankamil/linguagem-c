# include <stdio.h>
# include <time.h>
# include <stdlib.h>
# include <conio.h>

int main(){
	int tamanho_atual = 1;
	int direcao_movimento = 1;
	int pscx_cobra = 9;
	int pscy_cobra = 9;
	int pscx_comida = 7;
	int pscy_comida = 7;
	char matriz[20][20];
	srand((unsigned)time(NULL));
	
	// For de preenchimento 
	
	for(int i = 0; i < 20; i++){
		for(int j = 0; j < 20; j++){
			matriz[i][j] = 32;
		}
	}
	
	// Resto do código
	while(1){
		printf("Tamanho atual: %d. \n", tamanho_atual);
		if(pscx_cobra == pscx_comida && pscy_cobra == pscy_comida){
			pscx_comida = rand() % 18;
			pscy_comida = rand() % 18;
			++tamanho_atual;
		}
		for(int i = 0; i < 60; i++){
			printf("-");
		}
		printf("\n");
		for(int i = 0; i < 20; i++){
			for(int j = 0; j < 20; j++){
				if( j == 0){
					printf("|%c ", matriz[i][j]);
				}
				else if(j == 19){
					printf(" %c|", matriz[i][j]);
				}
				else if(i == pscy_cobra && j == pscx_cobra){
					if (tamanho_atual == 1){
						printf(" = ", matriz[i][j]);
					}
					else{
						int x = 0;
						if(direcao_movimento == 4 ){
							for(x = pscx_cobra - tamanho_atual; x < pscx_cobra; x++){
								if(x == pscx_cobra - tamanho_atual){
									printf(" = ");
								}
								else{
									printf(" - ");
								}
							}
							j += tamanho_atual - 1;
						}
						else{
							for(x = pscx_cobra + tamanho_atual; x > pscx_cobra; x--){
								if(x <= pscx_cobra){
									printf(" - ");
								}
								else{
									printf(" = ");
								}
							}
							j += tamanho_atual - 1;
							pscx_cobra = x; 
						}
					}
				}
				else if(i == pscy_comida && j == pscx_comida){
					printf(" o ", matriz[i][j]);
				}
				else{
					printf(" %c ", matriz[i][j]);
				}
			}
			printf("\n");
		}
		for(int i = 0; i < 60; i++){
			printf("-");
		}
		
		// movimentação
		
		for(int alteracao = 0; alteracao != 1; alteracao += 0){
			printf("\n\n");
			char jogada = getch();
			printf("\n\n");
			switch(jogada){
				case 's':
					if(pscy_cobra < 19){
						pscy_cobra += 1;
						alteracao = 1;
						direcao_movimento = 2;
					}
					break;
				case 80:
					if(pscy_cobra < 19){
						pscy_cobra += 1;
						alteracao = 1;
						direcao_movimento = 2;
					}
					break;
				case 'w':
					if(pscy_cobra > 0){
						pscy_cobra -= 1;
						alteracao = 1;
						direcao_movimento = 8;
					}
					break;
				case 72:
					if(pscy_cobra > 0){
						pscy_cobra -= 1;
						alteracao = 1;
						direcao_movimento = 8;
					}
					break;
				case 'a':
					if(pscx_cobra > 1){
						pscx_cobra -= 1;
						alteracao = 1;
						direcao_movimento = 4;
					}
					break;
				case 75:
					if(pscx_cobra > 1){
						pscx_cobra -= 1;
						alteracao = 1;
						direcao_movimento = 4;
					}
					break;
				case 'd':
					if(pscx_cobra < 18){
						pscx_cobra += 1;
						alteracao = 1;
						direcao_movimento = 6;
					}
					break;
				case 77:
					if(pscx_cobra < 18){
						pscx_cobra += 1;
						alteracao = 1;
						direcao_movimento = 6;
					}
					break;
			}
		}
		system("cls");
	}
}
