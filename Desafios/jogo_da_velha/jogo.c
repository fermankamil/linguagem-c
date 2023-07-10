# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
# include <strings.h>
# include <time.h>


void titulo(char string[], char simbolo, short linha){
	short tamanho_string = strlen(string) + 4;
	short i = 0;
	if(linha == 0){
		for(i = 0; i < tamanho_string; ++i){
			printf("%c", simbolo);
		}
		printf("\n  %s  \n", string);
		for(i = 0; i < tamanho_string; ++i){
			printf("%c", simbolo);
		}
		printf("\n");
	}
	else{
		for(i = 0; i < tamanho_string; ++i){
		printf("%c", simbolo);
		}	
	}
}


int menu_principal(){
	titulo("Menu Principal", '-', 0);
	printf("[1] - Modo Solo\n");
	printf("[2] - Modo Versus\n");
	printf("[3] - Sair\n");
	printf("\n> Sua escolha: ");
	char caracter = getch();
	printf("%c.\n", caracter);
	int retorno = caracter - '0';
	return retorno;
}


void menu_jogada(){
	printf("[W] - Cima\n");
	printf("[S] - Baixo\n");
	printf("[A] - Esquerda\n");
	printf("[D] - Direita\n");
	printf("[[_]] - Confirmar jogada\n");
	printf("[P] - Parar\n");
	printf("\n> Sua jogada: ");
}


// verificadores de vitoria

void testa_diagonal_principal(char entrada[][3], int *resultado){
	if(entrada[0][0] == entrada[1][1] && entrada[1][1] == entrada[2][2] && entrada[2][2] != ' '){
		if(entrada[0][0] == 'X'){
				titulo("Vitoria do jogador 1!", '-', 0);
			}
		else{
			titulo("Vitoria do jogador 2!", '-', 0);
		}
		*resultado = 1;
	}
}
	

void testa_diagonal_secundaria(char entrada [0][3], int *resultado){
	if(entrada[2][0] == entrada[1][1] && entrada[1][1] == entrada[0][2] && entrada[1][1] != ' '){
		if(entrada[1][1] == 'X'){
			titulo("Vitoria do jogador 1!", '-', 0);
		}
		else{
			titulo("Vitoria do jogador 2!", '-', 0);
		}
		*resultado = 1;
	}
}	
	

void testa_linha(char entrada[][3], int *resultado){
	for(int x = 0, igual = 0; x < 3; x++){
		for(int y = 0; y < 3; y++){
			if(entrada[x][y] == entrada[x][y + 1] && entrada[x][y + 1] != ' '){
				igual += 1;
				if(igual == 2){
					if(entrada[x][y] == 'X'){
						titulo("Vitoria do jogador 1!", '-', 0);
					}
				else{
					titulo("Vitoria do jogador 2!", '-', 0);
					}
					*resultado = 1;
				break;	
				}
				continue;	
			}
			break;
		}
		igual = 0;
	}
}


void testa_coluna(char entrada[][3], int *resultado){
	for(int x = 0, igual = 0; x < 3; x++){
		for(int y = 0; y < 3; y++){
			if(entrada[y][x] == entrada[y + 1][x] && entrada[y][x] != ' '){
				igual += 1;
				if(igual == 2){
					if(entrada[y][x] == 'X'){
						titulo("Vitoria do jogador 1!", '-', 0);
					}
					else{
						titulo("Vitoria do jogador 2!", '-', 0);
						}
					*resultado = 1;
				break;	
				}	
				continue;
			}
			break;
		}
		igual = 0;
	}
}
	
void imprime_tabuleiro(char entrada[][3], int x, int y){
	for(int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			if (j == 0 || j == 1){	
				if (j == x && i == y){
					printf(" {%c} ", entrada[i][j]);
				}
				else{
					printf("  %c  ", entrada[i][j]);
				}
				printf("|");
			}
			else{
				if (j == x && i == y){
					printf(" {%c}  ", entrada[i][j]);
				}
				else{
					printf("  %c  ", entrada[i][j]);
				}
			}
		}
		printf("\n");
		if(i < 2){
			for(int k = 0; k < 6; k ++){
				printf("---");	
			}
		}
		printf("\n");
	}
}


void mostra_vez(int entrada){
	if (entrada % 2 == 0 || entrada == 0){
		titulo("JOGADOR 1 (X) ", '-', 0);
	}
	else{
		titulo("JOGADOR 2 (O) ", '-', 0);
	}
	printf("\n");		
}


void main(){
	for(int root = 1; root != 0;){
		
		// Inicio da declaração de variáveis 
		
		int menu = 0;
		int rodada = 0;
		int modo_de_jogo = 0;
		int selecao;
		int pscy_seletor = 1;
		int pscx_seletor = 1;
		int pcy = 0;
		int pcx = 0;
		int victoria = 0;
		char tabuleiro[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
		srand((unsigned)time(NULL));
		
		// Fim da declaração de variáveis 

		// Menu básico de seleção
		
		for(menu = 0; menu != 10;){
			menu = menu_principal();
			if (menu == 1){
				system("cls");
				printf("[Modo solo escolhido]\n");
				modo_de_jogo = 0;
				printf("> Deseja ser 'X' ou 'O'?\n\n");
				printf("[1] - X\n");
				printf("[2] - O\n");
				while(1){
					printf("\n> Sua escolha: ");
					scanf("%d", & selecao);
					if(selecao == 1){
						printf("> Muito bem, voce sera 'X'!\n");
						break;
					}
					else if (selecao == 2){
						printf("> Muito bem, voce sera 'O'!\n");
						break;
					}
					else{
						printf("OPCAO INVALIDA!\n");
					}
				}
				printf("> Pressione qualquer tecla para comecar.");
				getch();
				system("cls");
				break;
			}
			else if(menu == 2){
				printf("> Modo Versus escolhido!\n");
				printf("> Pressione qualquer tecla para comecar.");
				getch();
				system("cls");
				modo_de_jogo = 1;
				break;
			}
			else if (menu == 3){
				titulo("Saindo...", '=', 0);
				modo_de_jogo = 3;
				root = 0;
				break;
			}
			else{
				printf("OPCAO INVALIDA!\n");
			}
		}
		
		
		// Modo Multiplayer
		
		while(rodada < 10 && modo_de_jogo == 1){
			
			// Testa se alguém venceu na jogada anterior
			
			testa_diagonal_principal(tabuleiro, &victoria);
			testa_diagonal_secundaria(tabuleiro, &victoria);
			testa_linha(tabuleiro, &victoria);
			testa_coluna(tabuleiro, &victoria);
	
			// Mostra de quem é a vez
						
			mostra_vez(rodada);

			// Imprime o tabuleiro
		
			imprime_tabuleiro(tabuleiro,  pscx_seletor,  pscy_seletor);
			
			// Testa se alguém já venceu o jogo
			
			if(victoria == 1){
				printf("O jogo acabou!\n");
				break;
			}
			
			// Torna jogável
			
			menu_jogada();	
			fflush(stdin);
			for(int alteracao = 0; alteracao != 1;){
				char jogada = getch();
				switch(jogada){
					case 's':
						if( pscy_seletor < 2){
							 pscy_seletor += 1;
							alteracao = 1;
						}
						break;
					case 80:
						if( pscy_seletor < 2){
							 pscy_seletor += 1;
							alteracao = 1;
						}
						break;
					case 'w':
						if( pscy_seletor > 0){
							 pscy_seletor -= 1;
							alteracao = 1;
						}
						break;
					case 72:
						if( pscy_seletor > 0){
							 pscy_seletor -= 1;
							alteracao = 1;
						}
						break;
					case 'a':
						if( pscx_seletor > 0){
							 pscx_seletor -= 1;
							alteracao = 1;
						}
						break;
					case 75:
						if( pscx_seletor > 0){
							 pscx_seletor -= 1;
							alteracao = 1;
						}
						break;
					case 'd':
						if( pscx_seletor < 2){
							 pscx_seletor += 1;
							alteracao = 1;
						}
						break;
					case 77:
						if( pscx_seletor < 2){
							 pscx_seletor += 1;
							alteracao = 1;
						}
						break;
					case 32:
						if(tabuleiro[ pscy_seletor][ pscx_seletor] == ' '){
							if(rodada % 2 == 0 || rodada == 0){
								tabuleiro[pscy_seletor][pscx_seletor] = 'X';
							}
							else{
								tabuleiro[pscy_seletor][pscx_seletor] = 'O';
							}
						rodada ++;
						alteracao = 1;
						 pscx_seletor = 1; 
						 pscy_seletor = 1;
						}
						break;
					case 'p':
						rodada = 14;
						break;
				}
			}
			if(rodada == 14){
				printf("SAINDO...");
			}
			else if(rodada != 10){
				system("cls");
			}
			else{
				printf("\n> Deu empate!");
			}
		}	
		
		// Modo Single-Player
		
		while(rodada < 10 && modo_de_jogo == 0){
				
			// Testa se alguém venceu na jogada anterior
			
			testa_diagonal_principal(tabuleiro, &victoria);
			testa_diagonal_secundaria(tabuleiro, &victoria);
			testa_linha(tabuleiro, &victoria);
			testa_coluna(tabuleiro, &victoria);
	
			// Mostra de quem é a vez
						
			mostra_vez(rodada);

			// Imprime o tabuleiro
		
			imprime_tabuleiro(tabuleiro,  pscx_seletor,  pscy_seletor);
			
			// Testa se alguém já venceu o jogo
			
			if(victoria == 1){
				printf("O jogo acabou!\n");
				break;
			}
			
			// Torna jogável
			
			menu_jogada();	
			fflush(stdin);
			if(((rodada % 2 == 0 || rodada == 0) && selecao == 1) || (rodada % 2 != 0 && selecao == 2)){
				for(int alteracao = 0; alteracao != 1; alteracao += 0){
					char jogada = getch();
					switch(jogada){
						case 's':
							if( pscy_seletor < 2){
								 pscy_seletor += 1;
								alteracao = 1;
							}
							break;
						case 80:
							if( pscy_seletor < 2){
								 pscy_seletor += 1;
								alteracao = 1;
							}
							break;
						case 'w':
							if( pscy_seletor > 0){
								 pscy_seletor -= 1;
								alteracao = 1;
							}
							break;
						case 72:
							if( pscy_seletor > 0){
								 pscy_seletor -= 1;
								alteracao = 1;
							}
							break;
						case 'a':
							if( pscx_seletor > 0){
								 pscx_seletor -= 1;
								alteracao = 1;
							}
							break;
						case 75:
							if( pscx_seletor > 0){
								 pscx_seletor -= 1;
								alteracao = 1;
							}
							break;
						case 'd':
							if( pscx_seletor < 2){
								 pscx_seletor += 1;
								alteracao = 1;
							}
							break;
						case 77:
							if( pscx_seletor < 2){
								 pscx_seletor += 1;
								alteracao = 1;
							}
							break;
						case 32:
							if(tabuleiro[ pscy_seletor][ pscx_seletor] == ' '){
								if(rodada % 2 == 0 || rodada == 0){
									tabuleiro[pscy_seletor][pscx_seletor] = 'X';
								}
								else{
									tabuleiro[pscy_seletor][pscx_seletor] = 'O';
								}
							rodada ++;
							alteracao = 1;
							 pscx_seletor = 1; 
							 pscy_seletor = 1;
							}
							break;
						case 'p':
							rodada = 14;
							break;
					}
				}
			}
			else{
				for(int alteracao = 0; alteracao != 1; alteracao += 0){
					pcy = rand() % 3;
					pcx = rand() % 3;
					if(tabuleiro[pcy][pcx] == ' '){
						if(selecao == 1){
							tabuleiro[pcy][pcx] = 'O';
						}
						else{
							tabuleiro[pcy][pcx] = 'X';
						}
						alteracao = 1;
						rodada += 1;
					}			
				}
			}
			if(rodada == 14){
				printf("SAINDO...");
			}
			else if(rodada != 10){
				system("cls");
			}
			else{
				printf("\n> Deu empate!");
			}
		}
		if(root != 0){
			printf("\n> Pressione qualquer tecla para recomecar.");
			getch();
			system("cls");
		}
	}
}
