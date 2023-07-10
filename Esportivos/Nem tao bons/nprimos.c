#include <stdio.h>
#include <stdlib.h>
int main(){
	int n, d, p = 0;
	printf("> Por favor , camaradinha, digite o numero que deseja saber se e primo ou nao: ");
	scanf("%i", & n);
	for (d = 2; d < n; ++d){
		if(n % d == 0){
			p = 1;
			break;
		}
	}
	if (p == 0 || n == 2)
		printf("> O numero eh primo! Seus unicos divisores sao %i e 1.\n\n", n);
	else
		printf("> O numero %i nao eh primo! Seu ultimo divisor foi: %i.\n",n, d);
	system("pause");
}
