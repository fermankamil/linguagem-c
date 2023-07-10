# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main(){
	int espaco=0,count=0, down=0,pedro=0,x=0;
	char stringum[50],stringdois[50],armazen;
	while(1){
		printf("> Digite a palavra que deseja testar se eh um palindromo: ");
		fflush(stdin);
		gets(stringum);
		for(count=0;stringum[count]!='\0';++count)
		for(x=count;x>0;--x){
			for(espaco=0;espaco<=x;++espaco){
				if((stringum[espaco]>=0 && stringum[espaco]<=47)||(stringum[espaco]>=58 && stringum[espaco]<=64)||(stringum[espaco]>=91 && stringum[espaco]<=96)||stringum[espaco]>=123 && stringum[espaco]<=126){
					armazen =stringum[espaco];
					stringum[espaco]=stringum[espaco+1];
					stringum[espaco+1]=armazen;
				}
				else if(stringum[espaco]>=65 && stringum[espaco]<=90){
					stringum[espaco]=stringum[espaco]+32;
				}
			}
			espaco=0;
		}
		for(count=0;stringum[count]!='\0';++count){}
		printf("> A palavra tem %i letras (excluindo caracteres especiais).",count);
		if(count%2==0)
			printf("\n> A palvra digitada possui um numero par de letras!");
		else
			printf("\n> A palvra digitada possui um numero impar de letras!");
		--count;
		for(down=0;stringum[count]!='\0';--count,++down){
				stringdois[count]=stringum[down];
			}
		count=0;
		--down;
		printf("\n> A inversa da palavra eh: %s.",stringdois);
		for(count=0;count<=down;++count){
			if(stringum[count]==stringdois[count]){
				pedro=1;		
			}		
			else{
				pedro=0;
				break;
			}
		}
		if(pedro==0)
			printf("\n> A palavra nao eh um palindromo.\n\n");
		if(pedro==1)
			printf("\n> A palavra eh um palindromo.\n\n");
	}
	system("pause");	
}