#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int count=0, down=0;
	char stringum[50],stringdois[50];
	printf("> Digite a palavra que deseja escrever em caixa alta:");
	gets(stringum);
	for(count=0;stringum[count]!='\0';++count){
		if(stringum[count]>=97 && stringum[count]<=122){
			stringdois[count]=stringum[count]-32;		
		}
		else 
			stringdois[count]=stringum[count];
	}
	printf("> A palavra escrita em caixa alta eh: %s.",stringdois);
}
