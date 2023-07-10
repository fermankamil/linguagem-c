#include <stdlib.h>
#include <stdio.h>
int main (void){
	int entrada[3];
	printf("> Cooeh menor, que dia o personagem faz aniversario?:");
	scanf("%i",&entrada[0]);
	printf("> Beleza! Agora nos diga em que mes o personagem nasceu:");
	scanf("%i",&entrada[3]);
	if(entrada[0]>31||entrada[0]<1){
		printf("> Os meses tem, no maximo 31 dias!.\n\n");
		system("pause");}
	if(entrada[3]>12){
		printf("> Existem apenas doze meses, boco!");
		system("pause");
	}
	printf("\n> A data, escrita por extenso, eh: ");
	entrada[1]=entrada[0]/10;
	entrada[2]=entrada[0]%10;
	switch(entrada[1]){
		case 0:
			break;
		case 1:
			if(entrada[2]==0)
			printf("Dez");
			switch(entrada[2]){
				case 0:
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
			break;}
	if(entrada[1]>1 && entrada[2]!=0)
		printf(" e ");
	if(entrada[1]>1){
		switch (entrada[2]){
			case 0:
				break;
			case 1:
				if(entrada[1]==0 && entrada[2]==1)
				printf("Primeiro");
				else
				printf("um");
			break;
				case 2:
				printf("dois");
				break;
			case 3:
				printf("tres");
				break;
			case 4:
				printf("quatro");
				break;
			case 5:  
				printf("cinco");
				break;
			case 6:  
				printf("seis");
				break;
			case 7:  
				printf("sete");
				break;
			case 8:  
				printf("oito");
				break;
			case 9:  
				printf("nove");
				break;
	}
	}
	else if(entrada[1]==0 && entrada[2]!=0){
		switch (entrada[2]){
			case 0:
				break;
			case 1:
				if(entrada[1]==0 && entrada[2]==1)
				printf("Primeiro");
				else
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
	switch(entrada[3]){
		case 0:
			printf("\n> Mes invalido!");
			break;
		case 1:
			printf (" de janeiro.");
			break;
		case 2:
			printf(" de fevereiro.");
			break;
		case 3:
			printf(" de marco.");
			break;
		case 4:
			printf(" de abril.");
			break;
		case 5:
			printf(" de maio.");
			break;	
		case 6:
			printf(" de junho.");
			break;
		case 7:
			printf(" de julho.");
			break;
		case 8:
			printf(" de agosto.");
			break;
		case 9:
			printf(" de setembro.");
			break;
		case 10:
			printf(" de outubro.");
			break;
		case 11:
			printf(" de novembro.");
			break;
		case 12:
			printf(" de dezembro.");
			break;
			
	}
	printf("\n\n");
	system("pause"); 
}