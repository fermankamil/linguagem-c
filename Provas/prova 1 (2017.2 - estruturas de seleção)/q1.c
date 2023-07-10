# include <stdio.h>
# include <stdlib.h>

void main(void){
	short entrada = 0;
	short milhar = 0, centena = 0, dezena = 0, unidade = 0;
	short calculo_verificador = 0, digito_verificador = 0;
	short saida = 0;
	printf("> Digite um numero: ");
	scanf("%hd", & entrada);
	if(entrada >= 1000 && entrada <= 9999){
		milhar = entrada / 1000;
		centena = entrada / 100 % 10;
		dezena = entrada / 10 % 10;
		unidade = entrada % 10;
		calculo_verificador = ((milhar + dezena) * 3) + (centena + unidade);
		if(calculo_verificador % 10 != 0){
			digito_verificador = 10 - (calculo_verificador % 10);
		}
		else{
		    digito_verificador = calculo_verificador % 10;
		}
		saida = digito_verificador + unidade * 10 + dezena * 100 + centena * 1000 + milhar * 10000;
		printf("> O numero acresido do digito verificador eh: %hd.\n\n", saida);
		system("pause");
	}
	else{
		printf("> Numero fora da faixa! Tente novamente!");
	}	
}