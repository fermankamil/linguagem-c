# include <stdio.h>
# include <stdlib.h>

int main(void){
	long long int i = 0, n1 = 1, n2 = 0, n3 = 0, l;
	printf("> Digite quantos numeros da sequencia de fibos voce quer conhecer: ");
	scanf("%lld", & l);
	printf("> ");
	while (i <= l){
		n3 = n2 + n1;
		n1 = n2;
		n2 = n3;
		if (i == l - 1)
        	printf("%lld e ", n3);
   		else if (i == l)
        	printf("%lld." , n3);
   		else
			printf("%lld, ", n3);
		i++;
	}
}