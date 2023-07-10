#include<stdlib.h>
#include<stdio.h>
int main(){
	int idade, escolha=1;
	while(escolha==1){
		printf("> Nos informe a sua idade e o diremos se o seu voto eh obrigatorio, facultativo ou se voce nao esta apto para votar:");
		scanf("%d",& idade);
		if(idade==17 || idade==16 || idade>69 && idade<128)
			printf("\n> O seu voto eh facultativo.");
		else if(idade>17 && idade<69)
			printf("\n> O seu voto eh obrigatorio.");
		else if(idade<16)
			printf("\n> Voce ainda nao possui a idade minima para votar (16), portanto nao eh apto. Faltam %d anos para que voce possa votar.", 16-idade);
		else if(idade>128)
			printf("\n> A idade digitada eh impossivel.");
		printf("\n\n> Deseja digitar uma nova idade?\n\n1 - [sim]\n\n2 -[nao]\n\n");
		scanf("%d", & escolha);
		if(escolha==2){
			printf("\n\n> Obrigado por utilizar nosso programa!");
			}
		else
			printf("\n");	
		}
}