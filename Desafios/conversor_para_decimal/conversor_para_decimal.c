// Nome: Conversor para decimal.
// objetivo: O programa converte um número da base binária para a daecimal.
// Criador: Rafael Mota.
// Data de criação: 20/02/2023.

# include <stdio.h>
# include <stdlib.h>

int main(void){
	long int x = 0, pot = 0, bin[7] = {0, 0, 0, 0, 0, 0, 0}, numero = 0;
	int decimal = 0, y = 0, casas = 0;
	printf("> Digite o numero em binario que deseja converter para decimal: ");
	scanf("%ld", & numero);
	
	// Descobre quantas casas binárias o número possui.
	
	for(x = numero, casas = 0; x > 0; ++casas){
		x /= 10;
	}
	
	// Se o número de casas for maior que oito (contando de 0 a 7), declara novamente o vetor bin com o número de casas necessárias.
	
	if (casas > 7){
		int bin[casas];
	}
	
	// Separa o número digitado e o armazena no vetor bin, levando em conta o número de casas necessárias.
	
	for(x = numero, casas = 0; x > 0; ++casas){
		bin[casas] = x % 10;	
		x /= 10;	
	}
	
	// Sabendo o número de casas, a variável 'y' determina a que potência o número 2 deve ser elevado.
	
	for(y = 0; y < casas; ++y){
		if (bin[y] == 1){
			
			// Se a casa 0 tiver valor 1, a soma decimal recebe valor 1, pois qualquer número elevado a zero é igual a 1.
			
			if (y == 0){
				decimal += 1;
			 }
			 
			 // Nos demais casos, é utilizado um laço for que soma a potência (inicializaada com 1) a ela mesma multiplicada por 1 'y' vezes.
			 // Em outras palavras, essa parte eleva o número 2 à potência determinada por 'y", se a memsa for diferente de 0.
			 
			 else{
				for(pot = 1, x = 0; x < y; ++x){
					pot += pot * bin[y];
				}
				
				// O valor em decimal recebe ele mesmo somado à potência de 2 a cada vez que o laço se repete.
				// Em outras palavras, decimal recebe o valor da determinada casa binária, se a mesma for diferente de 0.
				
				decimal += pot;
			}
		}	
		
		// Se a casa em questão possuir valor zero, o programa simplesmente a ignora e nada é somado à variável decimal.
		
		else if (bin[y] == 0){
			continue;
		}
		
		// Se a casa possuir valor diferente de 0 ou 1 o progrma encerra e exibe uma mensagem de erro.
		
		else{
			printf("> O numero na casa %ld eh diferente de 0 ou 1, portanto eh invalido!\n");
			break;
		}
	}
	printf("> O binario %ld em decimal eh igual a %ld.", numero, decimal);
}
