# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

void main(){
	int conta = 0;
	while(conta <= 100){
		printf("%%%d...\n", conta);
		for(int pera = 0; pera < conta; pera ++){
			printf("-");
		}
		sleep(1);
		if(conta < 100){	
			system("cls");
		}
		conta ++;
	}
}
