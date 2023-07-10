#include <stdio.h>
#include <stdlib.h>
int main(){
	int num, trint, milhar, centena, dezena, unidade, casa1, casa2, casa3, casa4, soma;
	printf("Digite um numero em trint (So serao aceitos numeros entre 0 e 2):");
	scanf("%i",&trint);
	if(trint<=2222){
	 	milhar=trint/1000;
		centena=(trint%1000)/100;
		dezena=(trint%1000)%100/10;
		unidade=(trint%1000)%100%10;
		//unidade de milhar.
		if(milhar==2)
		casa4=27;
		if(milhar==1)
		casa4=0;
		if(milhar==0)
		casa4=-27;
//unidade de centena.
		if(centena==2)
		casa3=9;
		if(centena==1)
		casa3=0;
		if(centena==0)
		casa3=-9;
//unidade de dezena.
		if(dezena==2)
		casa2=3;
		if(dezena==1)
		casa2=0;
		if(dezena==0)
		casa2=-3;
//uni, uni, unidade.
		if(unidade==2)
		casa1=1;
		if(unidade==1)
		casa1=0;
		if(unidade==0)
		casa1=-1;		
		printf("O trint digitado equivale a: %i no sistema decimal de unidades.\n",(casa4+casa3+casa2+casa1));
	}
		else{
		printf("O numero digitado estrapola o limete de quatro trits");}
		system ("pause");
}
