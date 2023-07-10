#include <stdlib.h>
#include <stdio.h>
int main (){
	int sequencia1,sequencia2,a1,a2,m1,m2,d1,d2;
	printf("Bem vindo ao comparador de idades!\nPor favor, nos informe a sequencia correspondente a ano, mes e dia da primeira pessoa:");
	scanf("%i",&sequencia1);
	if(sequencia1<999){
		a1=sequencia1/100;
		m1=(sequencia1%100)/10;
		d1=(sequencia1%100)%10;		
		}
	else{
	printf("O primeiro valor digitado eh invalido!Tente novamente!\n");
	system("pause");
	return 0;
	}
	printf("Por favor, nos informe a sequencia correspondente a ano, mes e dia da segunda pessoa:");
	scanf("%i",&sequencia2);
		if(sequencia2<999){
		a2=sequencia2/100;
		m2=(sequencia2%100)/10;
		d2=(sequencia2%100)%10;		
		}
	else{
	printf("O valor segundo valor digitado eh invalido!Tente novamente!\n");
	system("pause");
	return 0;
	}
	if(a1>a2)
		printf("A primeira pessoa eh mais velha por %i anos!\n", (a1-a2));
	if(a2>a1)
		printf("A segunda pessoa eh mais velha por %i anos!\n", (a2-a1));
	if((a1==a2) && (m1>m2))
		printf("A primeira pessoa eh mais velha por %i meses!\n",(m1-m2));
	if((a2==a1) && (m2>m1))
		printf("A segunda pessoa eh mais velha por %i meses!\n", (m2-m1));
	if((a1==a2) && (m1==m2) && (d1>d2))
		printf("A primeira pessoa eh mais velha por %i dias!\n", (d1-d2));
	if((a2==a1) && (m2==m1) && (d2>d1))
		printf("A segunda pessoa eh mais velha por %i dias!\n", (d2-d1));
	if((a2==a1) && (m2==m1) && (d2==d1))
		printf("As pessoas tem a mesma idade!\n");
	system("pause");
	return 0;
}
	