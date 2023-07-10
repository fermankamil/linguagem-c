#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	char cargo[20];
	int repeticao=1;
	float salario, novoSalario;
	printf ("> Qual eh o seu cargo atualmente?:");
	scanf ("%s", cargo);
	printf ("> Informe quanto voce recebe:");
	scanf ("%f",&salario);
	if((cargo[0]=='g'|| cargo[0]=='G') &&(cargo[1]=='e' && cargo[2]=='r' && cargo[3]=='e' && cargo[4]=='n' && cargo[5]=='t'&& cargo[6]=='e')){
		printf("\n> O seu salario costumava ser: %.2f.\n> Como gerente, voce recebeu um aumento de 10%%!\n> Apos o aumento, ele sera: %.2f.\n> A diferenca entre eles eh: %.2f.",salario,salario+(salario*10)/100,salario+(salario*10)/100-salario);
	}
	else if((cargo[0]=='e'|| cargo[0]=='E') &&(cargo[1]=='n' && cargo[2]=='g' && cargo[3]=='e' && cargo[4]=='n' && cargo[5]=='h'&& cargo[6]=='e' && cargo[7]=='i' && cargo[8]=='r' && cargo[9]=='o')){
		printf("\n> O seu salario costumava ser: %.2f.\n> Como engenheiro, voce recebeu um aumento de 20%%!\n> Apos o aumento, ele sera: %.2f.\n> A diferenca entre eles eh: %.2f.",salario,salario+(salario*20)/100,salario+(salario*20)/100-salario);
	}
	else if((cargo[0]=='T'|| cargo[0]=='t') &&(cargo[1]=='e' && cargo[2]=='c' && cargo[3]=='n' && cargo[4]=='i' && cargo[5]=='c'&& cargo[6]=='o')){
		printf("\n> O seu salario costumava ser: %.2f.\n> Como tecnico, voce recebeu um aumento de 30%%!\n> Apos o aumento, ele sera: %.2f.\n> A diferenca entre eles eh: %.2f.",salario,salario+(salario*30)/100,salario+(salario*30)/100-salario);
	}
	else{
			printf("\n> O seu salario costumava ser: %.2f.\n> Como funcionario sem classe, voce recebeu um aumento de 40%%!\n> Apos o aumento, ele sera: %.2f.\n> A diferenca entre eles eh: %.2f.",salario,salario+(salario*40)/100,salario+(salario*40)/100-salario);
		}
}