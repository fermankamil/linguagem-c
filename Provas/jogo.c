#include <stdio.h>
#include <stdlib.h>
int main(void){
	int pscchute,posicao,v1,v2=0,tentativas=0,contador;
	char senha[11],chute[11];
	printf("> Primeiro jogador, digite a senha original:");
	scanf("%s",senha);
	for(contador=0;senha[contador]!='\0';++contador){
	}
	while(v1!=contador){
		printf("> Segundo jogador, tente advinhar a senha:");
		fflush(stdin);
		scanf("%s", chute);
		for(v1=0,v2=0,pscchute=0;chute[pscchute]!='\0';++pscchute){
			for(posicao=0;senha[posicao]!='\0';++posicao){
				if((chute[pscchute]==senha[posicao]) && (pscchute==posicao)){
					++v1;
					break;
				}
				else if((chute[pscchute]==senha[posicao]) && (pscchute!=posicao)){
					if(chute[pscchute]==senha[posicao+1]&&pscchute==posicao+1){
						++v1;
						break;
					}
					else{
						++v2;
						break;
					}
				}	
			}
		}
		if (senha[0]!=chute[0]||senha[1]!=chute[1]||senha[2]!=chute[2]||senha[3]!=chute[3]){
			printf("> Errado! Seu resultado, nesta rodada(%d), foi: (%d,%d)\n\n",tentativas+1,v1,v2);	
		++tentativas;
		}
		else{
			printf("> Correto! Seu resultado, nesta rodada(%d), foi: (%d,%d)\n\n",tentativas+1,v1,v2);	
		}
	}
	printf("> Parabens, vocce acertou a senha! Foram necessarias %d tentativas!",tentativas+1);
}