#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int count=0, down=0;
	char stringum[50],stringdois[50];
	printf("> Digite a palavra que deseja retirar as vogais:");
	gets(stringum);
	for(count=0;stringum[count]!='\0';++count){
		if(stringum[count]=='a'||stringum[count]=='e'||stringum[count]=='i'||stringum[count]=='o'||stringum[count]=='u'||stringum[count]=='A'||stringum[count]=='E'||stringum[count]=='I'||stringum[count]=='O'||stringum[count]=='U')				
			stringdois[count]='*';
		else
			stringdois[count]=stringum[count];
		}
	printf("\n> A palavra sem as vogais eh: %s.",stringdois);	
	printf("\n> Lembrando, a palavra original eh: %s.",stringum);
}