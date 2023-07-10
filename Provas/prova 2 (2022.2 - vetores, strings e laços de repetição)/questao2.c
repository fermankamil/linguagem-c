#include<stdio.h>
#include<strings.h>
int main(){
	int count,divertido=0,chateado=0;
	char frase[281];
	printf("Digite uma frase:");
	gets(frase);
	for(count=0;frase[count]!='\0';++count){
		if(frase[count]==':' && frase[count+1]=='-' && frase[count+2]==')')
			++divertido;
		else if(frase[count]==':' && frase[count+1]=='-' && frase[count+2]=='(')
			++chateado;
	}
	if(divertido>chateado)
		printf("Divertido");
	else if (divertido==chateado)
		printf("neutro");
	else if(chateado>divertido)
		printf("chateado");
}