# include <stdlib.h>
# include <stdio.h>

void main (void){
	while(1){
		short es = 1, m, c , d, u;
		int e;
		printf("> Cooeh menor, por favor digite o numero para que o escrevamos por extenso: ");
		scanf("%i", & e);
		if (e >= 0 && e <= 9999){
			printf("> O numero escrito por extenso eh: ");
			m = e / 1000;
			c = e / 100 % 10;
			d = e / 10 % 10;
			u = e % 10;
			switch(m){
				case 1:
					printf("Mil ");
					break;
				case 2:
					printf("Dois Mil ");
					break;
				case 3:
					printf("Tres Mil ");
					break;
				case 4:
					printf("Quatro Mil ");
					break;
				case 5:
					printf("Cinco Mil ");
					break;
				case 6:
					printf("Seis Mil ");
					break;
				case 7:
					printf("Sete Mil ");
					break;
				case 8:
					printf("Oito Mil ");
					break;
				case 9:
					printf("Nove Mil ");
					break;
			}
			if ((m >= 1) && (c > 0 && d == 0 && u == 0)){
				printf("e ");
			}
			else if(m >= 1 && u > 0 && d == 0 && c == 0){
				printf("e ");
			}
			switch(c){
				case 1:
					if(d == 0 && u == 0){
						printf("Cem");
					}
					else{
						printf("Cento");
					}
					break;
				case 2:
					printf("Duzentos");
					break;
				case 3:
					printf("Trezentos");
					break;
				case 4:
					printf("Quatrocentos");
					break;
				case 5:
					printf("Quinhentos");
					break;
				case 6:
					printf("Seicentos");
					break;
				case 7:
					printf("Setecentos");
					break;
				case 8:
					printf("Oitocentos");
					break;
				case 9:
					printf("Novecentos");
					break;
			}	
			if((m != 0 || c > 0) && (d != 0)){
				printf(" e ");
			}
			switch(d){
				case 1:
					switch(u){
						case 0:
							printf("Dez");
							break;
						case 1:
							printf("Onze");
							break;
						case 2:
							printf("Doze");
							break;
						case 3:
							printf("Treze");
							break;
						case 4:
							printf("Quartorze");
							break;
						case 5:
							printf("Quinze");
							break;
						case 6:
							printf("Dezesseis");
							break;
						case 7:
							printf("Dezessete");
							break;
						case 8:
							printf("Dezoito");
							break;
						case 9:
							printf("Dezenove");
							break;
						}
					break;
				case 2:
					printf("Vinte");
					break;
				case 3:
					printf("Trinta");
					break;
				case 4:
					printf("Quarenta");
					break;
				case 5:
					printf("Cinquenta");
					break;
				case 6:
					printf("Sessenta");
					break;
				case 7:
					printf("Setenta");
					break;
				case 8:
					printf("Oitenta");
					break;
				case 9:
					printf("Noventa");
					break;
			}
			if(u != 0 && d != 1 && d > 0)   {
				printf(" e ");
			}                     
			else if(c >= 1 && u != 0){
				printf(" e ");
			}
			if(d != 1){
				switch (u){
					case 0:
						if(m == 0 && c == 0 && d == 0 && u == 0){
							printf("Zero");
							break;
						} 
					case 1:
						printf("Um");
						break;
					case 2:
						printf("Dois");
						break;
					case 3:
						printf("Tres");
						break;
					case 4:
						printf("Quatro");
						break;
					case 5:  
						printf("Cinco");
						break;
					case 6:  
						printf("Seis");
						break;
					case 7:  
						printf("Sete");
						break;
					case 8:  
						printf("Oito");
						break;
					case 9:  
						printf("Nove");
						break;
				}
			}
			printf(".");
			printf("\n\n> Deseja ler outro numero?\n\n[1] sim\n[2] nao\n\n");
			printf("> Sua escolha: ");
			scanf("%i", & es);
			printf("\n");
			if(es == 1){
				printf("> Rebobinando...\n\n");
			}
			else if(es == 2){
				printf("> Valeu menor, ateh a proxima!\n\n");
				break;				
			}
			else{
				printf("> Resposta invalida! O programa vai continuar!");
			}
		}
		else{
			printf("> Sao permitidos valores de ate quatro digitos. Tente novamente!\n\n");
		}
	} 
	system("pause");
}
