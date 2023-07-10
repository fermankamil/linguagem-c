# include <stdlib.h>
# include <stdio.h>

void main(){
	float colesterol_total = 0, HDL_total = 0, triglicerideos = 0; // entrada
	float nivel_ldl = 0; // saida
	printf("> Digite o colesterol total: ");
	scanf("%f", & colesterol_total);
	printf("> Digite o HDL total: ");
	scanf("%f", & HDL_total);
	printf("> Digite o nivel de triglicerideos: ");
	scanf("%f", & triglicerideos);
	nivel_ldl = ((colesterol_total - HDL_total) - (triglicerideos * 20 / 100));
	printf("> O resultado foi %.2fmg/dl e a categoria eh: ", nivel_ldl);
	if(nivel_ldl < 100){
		printf("Otima.");
	}
	else if(nivel_ldl >= 100 && nivel_ldl <= 129){
		printf("Sub-otima.");
	}
	else if(nivel_ldl >= 130 && nivel_ldl <= 159 ){
		printf("Limitrofe.");
	}
	else if(nivel_ldl >= 160 && nivel_ldl <= 189){
		printf("Alto.");
	}
	else{
		printf("Muito alto.");
	}
}
