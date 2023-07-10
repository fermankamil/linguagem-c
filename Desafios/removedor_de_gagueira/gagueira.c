// Testa gagueira 1.0

# include <stdio.h>
# include <stdlib.h>
# define tamanho 25

int main(){
	char entrada[tamanho];
	char saida[tamanho];
	char teste[tamanho];
	int conta_caracteres;
	int igualdade = 0;
	int repeticao = 0;
	int insere_char = 0;
	int contador2;
	int preenchimento;
	printf("> Digite a palavra com gagueira: ");
	gets(entrada);
	for(conta_caracteres = 0; entrada[conta_caracteres] != '\0'; conta_caracteres++){
	}
	for(int contador = 0; contador < conta_caracteres; contador++){
		for(int fatiada = contador, original = 0; original < conta_caracteres; original++){
			if(entrada[fatiada] == entrada[original]){
				fatiada++;
				igualdade ++;
			}
			else{
				igualdade = 0;
			}
			if(igualdade == conta_caracteres - contador && contador != 0 && igualdade % 2 == 0){
				for(contador2 = conta_caracteres - (igualdade / 2), insere_char = 0; insere_char < igualdade / 2; contador2++, insere_char++){
					teste[insere_char] = entrada[contador2];      
				}
				teste[insere_char] = '\0';
				for(int j = 0, c = 0; entrada[c] != '\0'; ++c){
					if(entrada[c] == teste[j]){
						if(j == (igualdade / 2) - 1){
							j++;
							repeticao++;
							j = 0;
						}
						else
							++j; 
					}
					else if (j > 0 && entrada [c] != teste[j]){
							j = 0;
					}		
				}
				if(repeticao >= 2){
					contador = conta_caracteres;
					break;
				}
				repeticao = 0;
			}
		}
	}
	if(repeticao >= 2){
		for(preenchimento = 0; preenchimento <= igualdade; preenchimento++){
			saida[preenchimento] = entrada[preenchimento];
		}
		saida[preenchimento] = '\0';
	}
	printf("> A palavra, sem repeticoes eh: ");
	puts(saida);
}