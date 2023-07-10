#include<stdio.h>
#include<stdlib.h>
int main(void){
int entrada,n[3];
	printf("> Digite um numero maior que 0 e menor que 9999 para que o escrevamos de forma ordinal:");
 	scanf("%d",&entrada);
 	if(entrada<=9999){
	 	n[0]=entrada/1000;
	 	n[1]=(entrada%1000)/100;
	 	n[2]=(entrada%1000)%100/10;
	 	n[3]=(entrada%1000)%100%10;
	 	printf("> O numero escrito em ordinario eh: ");
	 	switch(n[0]){
	 		case 0:
	 			break;
	 		case 1:
	 			printf("Milesimo");
	 			break;
	 		case 2:
	 			printf("Segundo milesimo");
	 			break;
	 		case 3:
	 			printf("Terceiro milesimo");
	 			break;
	 		case 4:
	 			printf("Quarto milesimo");
	 			break;
	 		case 5:
	 			printf("Quinto milesimo");
	 			break;
	 		case 6:
	 			printf("Sexto milesimo");
	 			break;
	 		case 7:
	 			printf("Setimo milesimo");
	 			break;
	 		case 8:
	 			printf("Oitavo milesimo");
	 			break;
	 		case 9:
	 			printf("Nono milesimo");
	 			break;
	 			
		 }
		if(n[0]>0)
			printf(" ");
		switch(n[1]){
			case 0:
	 			break;
	 		case 1:
	 			printf("Centesimo");
	 			break;
	 		case 2:
	 			printf("Ducentesimo");
	 			break;
	 		case 3:
	 			printf("Trecentesimo");
	 			break;
	 		case 4:
	 			printf("Quadringentesimo");
	 			break;
	 		case 5:
	 			printf("Quingentésimo");
	 			break;
	 		case 6:
	 			printf("Seiscentesimo");
	 			break;
	 		case 7:
	 			printf("Septingentesimo");
	 			break;
	 		case 8:
	 			printf("Octingentesimo");
	 			break;
	 		case 9:
	 			printf("Nongentesimo");
	 			break;
		}
		if(n[0]>0 || n[1]>0)
			printf(" ");
		switch(n[2]){
			case 0:
	 			break;
	 		case 1:
	 			printf("Decimo");
	 			break;
	 		case 2:
	 			printf("Vigesimo");
	 			break;
	 		case 3:
	 			printf("Trigesimo");
	 			break;
	 		case 4:
	 			printf("Quadrigesimo");
	 			break;
	 		case 5:
	 			printf("Quinquagesimo");
	 			break;
	 		case 6:
	 			printf("Sexagesimo");
	 			break;
	 		case 7:
	 			printf("Septuagesimo");
	 			break;
	 		case 8:
	 			printf("Octogesimo");
	 			break;
	 		case 9:
	 			printf("Nonagesimo");
	 			break;
		}			
		if((n[3]>0 ) && (n[0]>0 || n[1]>0 || n[2]>0));
			printf(" ");
		switch(n[3]){
			case 0:
	 			break;
	 		case 1:
	 			printf("Primeiro");
	 			break;
	 		case 2:
	 			printf("Segundo");
	 			break;
	 		case 3:
	 			printf("Terceiro");
	 			break;
	 		case 4:
	 			printf("Quarto");
	 			break;
	 		case 5:
	 			printf("Quinto");
	 			break;
	 		case 6:
	 			printf("Sexto");
	 			break;
	 		case 7:
	 			printf("Setimo");
	 			break;
	 		case 8:
	 			printf("Oitavo");
	 			break;
	 		case 9:
	 			printf("Nono");
	 			break;
		}
	printf(".\n\n");
	}
	else{
		printf("> O numero digitado esta acima do limite estabelecido!");
		system("pause");
	}
	system("pause");
}