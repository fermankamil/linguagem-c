// Nome: Conversor para binário.
// objetivo: O programa converte um número da base decimal para a binária.
// Criador: Rafael Mota.
// Data de criação: 14/02/2023.

# include <stdio.h>
# include <stdlib.h>

int main(){
	int contador;
	
	// A variável contador define qual parte do programa será executada.
	// A função while (1) permite que o programa seja executado infinitamente até que seja interrompido. 

	while(1){
		
		// Variáveis do tipo long int armazenam mais dados de uma vez em suas memórias, permitindo que números maiores sejam convertidos.
	
		long int valor, print, numero;
		int casas = 7, x;
		
		// Para manter um certo nível de padronização, o vetor bin é inicializado com todas as casas valendo zero.
		// Dessa forma, se o número digitado pelo usuário não ocupar uma casa binária, ela será preenchida com zero.
		
		int bin[7] = {0, 0, 0, 0, 0, 0};
		char resposta[4];
	
		// As variáveis são declaradas dentro do laço while pois isso permite que elas sejam "resetadas" a cada execução do programa.
	
		if (contador == 0){
			printf("> Digite um numero a ser convertido para binario: ");
			scanf("%ld", & numero);
			if (numero < 0 or numero > 9999){
				printf("> O numero digitado eh invalido. Tente novamente!\n\n");
				continue;
			}
			++contador;
		}
		if(contador == 1){
			if(numero > 255){
				
				// Se o número digitado pelo usuário for maior que 255, isso implica que ele ocupará mais de oito casas binárias.
				// Neste caso, o laço "for" abaixo irá dividir o número por 2 enquanto ele for divisivel.
				// A cada vez que o número é dividido e tem resto 0 ou 1, o número de casas aumenta.
							
				for(casas = 0, x = numero; x >= 1; ++casas){
					x /= 2;
				}
				
				// Levando em consideração que o número de casas deve ser contado a partir de 0 ao total de casas, a variável "casas" é decressida em 1.
				
				--casas;
				
				// Caso o número seja maior que 255, o vetor "bin" é declarado novamente, com o número de casas binárias necessárias.
				// Cada espaço dentro do vetor "bin" receberá um digito binário.
				
				int bin[casas] = {0, 0, 0, 0, 0, 0};
			}
			
			// O laço for abaixo realiza a divisão do número digitado por 2 e armazena o resto da divisão no vetor "bin".
			// Cada resto de divisão representa um digito binário que será armazenado em "bin" de acordo com a variável "posição".
			// Observa-se que cada digito binário é armazenado no final do vetor "bin", já realizando a inversão do resultado binário.
			// A variável "print" armazena o número originalmente digitado para uso posterior.
			
			for(print = numero, x = casas; numero != 0; --x){
				bin[x] = numero % 2;
				numero /= 2;
			}
			
			// A variável valor é multiplicada por 2 a fim de descobrir o valor da maior casa binária que será utilizada.
			// Sabendo o valor da maior casa binária, é possívei exibi-lá posteriormente. 
			
			for(valor = 1, x = 0; x <= casas; ++x){
				valor *= 2;
			}
			
			// O laço for abaixo exibe qual potência de 2 determinada casa binária representa.
			
			printf("\n");
			for(x = casas; x >= 0 ; --x){
				printf("|%d|\t", x);
			}
			printf("Potencia da casa binaria.\n");
			
			// Iniciando pela maior casa binária, o laço for abaixo exibe todas as casas binárias utilizadas para representar o número digitado.
			
			for(x = 0; x <= casas; ++x){
				valor /= 2;
				printf("|%ld|\t", valor);
			}
			printf("Valor da potencia.\n");
			
			// Após a quebra de parágrafo, é utilizado um laço de repetição responsável por exibir todos os valores/digitos armazenados no vetor "bin". 
			
			for(x = 0; x <= casas; ++x){
				printf("|%d|\t", bin[x]);
			}
			printf("Valor da casa binaria.");
			
			// Abaixo, o código novamente exibe o conteúdo de "bin", porém de forma mais direta. 
			
			printf("\n\n> Ou, de forma resumida, o numero %ld em binario eh: ", print);
			for(x = 0; x <= casas; ++x){
				printf("%d", bin[x]);
			}
			printf(".");
			++contador;
		}
		
		// O bloco abaixo questiona ao usuário se o mesmo dejesa continuar a usar o programa.
		// Caso não queira, o programa será encerrado. 
		
		if (contador == 2){
			printf("\n\n> Deseja rodar o codigo desde o inicio?: ");
			scanf("%s", resposta);
			if((resposta[0] == 's' || resposta[0] == 'S') and (resposta[1] == 'i' and resposta[2] == 'm')){
				printf("> Bip! Bip! Rebobinando...\n\n");
				contador = 0;
			}
			else if((resposta[0] == 'n' || resposta[0] == 'N') and (resposta[1] == 'a' and resposta[2 ] == 'o')){
				printf("> Entendido! Volte quando quiser, mestre. \n\n");
				break;
			}
			else {
				printf("> Resposta invalida! Tente novamente!");
				continue;
			}
		}
	}
		system("pause");
}
