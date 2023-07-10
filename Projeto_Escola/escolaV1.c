// Nome: Projeto escola.
// Objetivo: Controlar o funcionamento de uma Escola.
// Criador: Rafael Mota.
// Data de criacao: 22/03/2023.
// Versao: 0.7.
// Atualizado em: 30/05/23023.

# include <stdio.h>
# include <stdlib.h>
# include <strings.h>
# include <unistd.h>
# include <conio.h>
# define maximo 50

typedef struct{
    char nome[50];
    short id;
    char sexo; 
    char cpf[15];
    short idade;
    char matricula[11];
    struct{
	    short ano;
	    short mes;
	    short dia;
	}psdata;
} pessoa;


typedef struct{
	char nome;
	char codigo;
	short semestre;
	pessoa *professor;
	pessoa *alunos[];
} disciplina;

// Funcoes visuais

void titulo(char string[], char simbolo, short linha){
	short tamanho_string = strlen(string) + 4;
	short i = 0;
	if(linha == 0){
		for(i = 0; i < tamanho_string; ++i){
			printf("%c", simbolo);
		}
		printf("\n  %s  \n", string);
		for(i = 0; i < tamanho_string; ++i){
			printf("%c", simbolo);
		}
		printf("\n");
	}
	else{
		for(i = 0; i < tamanho_string; ++i){
		printf("%c", simbolo);
		}	
	}
}


void muda_tela(char* operacao, short perso){
	char captura[50];
	strcpy(captura, operacao);
	if(perso != 1){
		strcpy(captura, "PROCESSANDO...");
	}
	titulo(captura, '-', 0);
	sleep(1);	
	system("cls");
}


void sair_menu(){
	titulo("> Digite qualquer tecla para volta", '-', 1);
	printf("\n> Digite qualquer tecla para voltar: ");
	char retorno;
    fflush(stdin);
    retorno = getch();
    printf("%c.\n", retorno);
    muda_tela("VOLTANDO...", 1);
}


// Funcoes de menus

char menu_principal(){
	titulo("MENU PRINCIPAL", '-', 0);
    printf("[0] - SAIR\n");
	printf("[1] - ALUNO\n");
	printf("[2] - PROFESSOR\n");
	printf("[3] - DISCIPLINAS\n");
	printf("[4] - BUSCAR PESSOAS\n");
	titulo("MENU PRINCIPAL", '-', 1);
	printf("\n> Sua escolha: ");
    char retorno;
    fflush(stdin);
    retorno = getch();
    printf("%c.\n", retorno);
    muda_tela("null", 0);
    return retorno;
}


char menu_professor(){
	titulo("MENU PROFESSORES", '-', 0);
    printf("[0] - MENU PRINCIPAL\n");
	printf("[1] - LISTAR PROFESSORES\n");
	printf("[2] - LISTAR EM ORDEM ALFABETICA\n");
	printf("[3] - LISTAR POR SEXO [M/F]\n");
	printf("[4] - LISTAR EM ORDEM DE NASCIMENTO\n");
	printf("[5] - CADASTRAR NOVO PROFESSOR\n");
	printf("[6] - ATUALIZAR PROFESSOR EXISTENTE\n");
	printf("[7] - EXCLUIR PROFESSOR EXISTENTE\n");
	titulo("MENU PROFESSORES", '-', 1);
	printf("\n> Sua escolha: ");
	char retorno;
    fflush(stdin);
    retorno = getch();
    printf("%c.\n", retorno);
    muda_tela("null", 0);
    return retorno;
}


char menu_aluno(){
	titulo("MENU ALUNO", '-', 0);
    printf("[0] - MENU PRINCIPAL\n");
    printf("[1] - LISTAR ALUNOS\n");
	printf("[2] - LISTAR EM ORDEM ALFABETICA\n");
    printf("[3] - LISTAR POR SEXO [M/F]\n");
	printf("[4] - LISTAR EM ORDEM DE NASCIMENTO\n");
	printf("[5] - CADASTRAR NOVO ALUNO\n");
	printf("[6] - ATUALIZAR ALUNO EXISTENTE\n");
	printf("[7] - EXCLUIR ALUNO EXISTENTE\n");
	titulo("MENU MENU ALUNO", '-', 1);
	printf("\n> Sua escolha: ");
	char retorno;
    fflush(stdin);
    retorno = getch();
    printf("%c.\n", retorno);
    muda_tela("null", 0);
    return retorno;
}


char menu_disciplinas(){
	titulo("MENU DISCIPLINAS", '-', 0);
    printf("[0] - MENU PRINCIPAL\n");
	printf("[1] - LISTAR DISCIPLINAS\n");
	titulo("MENU DISCIPLINAS", '-', 1);
	printf("\n> Sua escolha: ");
	char retorno;
    fflush(stdin);
    retorno = getch();
    printf("%c.\n", retorno);
    muda_tela("null", 0);
    return retorno;
}
    

char menu_busca(){
	titulo("MENU DE BUSCA", '-', 0);
    printf("[0] - MENU PRINCIPAL\n");
	printf("[1] - INICIAR BUSCA\n");
	titulo("MENU DE BUSCA", '-', 1);
	printf("\n> Sua escolha: ");
	char retorno;
    fflush(stdin);
    retorno = getch();
    printf("%c.\n", retorno);
    muda_tela("null", 0);
    return retorno;
}    


char menu_sexo(){
	titulo("ESCOLHA DE SEXO", '-', 0);
	printf("[0] - VOLTAR\n");
    printf("[1] - FEMINININO [F]\n");
	printf("[2] - MASCULINO  [M]\n");
	titulo("MENU DE BUSCA", '-', 1);
	printf("\n> Sua escolha: ");
	char retorno;
    fflush(stdin);
    retorno = getch();
    printf("%c.\n", retorno);
    muda_tela("null", 0);
    return retorno;
}


char menu_atualizacao(){
	printf("[0] - VOLTAR\n");
	printf("[1] - ATUALIZAR NOME\n");
    printf("[2] - ATUALIZAR CPF\n");
	printf("[3] - ATUALIZAR MATRICULA\n");
	printf("[4] - ATUALIZAR SEXO\n");
	printf("[5] - ATUALIZAR IDADE\n");
	printf("[6] - ATUALIZAR DATA DE NASCIMENTO\n");
	titulo("sua escolha", '-', 1);
	printf("\n> Sua escolha: ");
	char retorno;
    fflush(stdin);
    retorno = getch();
    printf("%c.\n", retorno);
    muda_tela("null", 0);
    return retorno;
}


// Funcoes para validacao de dados

char valida_sexo(){
	char sexo;
	while(1){
		printf("> Sexo [F/M]: ");
		fflush(stdin);
		sexo = getch();
		printf("%c\n", sexo);
		if(sexo == 'm' || sexo =='f'){
			sexo = sexo - 32;
			printf("> Sexo [%c] registrado com sucesso!\n", sexo);
			break;
		}
		else if(sexo == 'M' || sexo == 'F' ){
			printf("> Sexo [%c] registrado com sucesso!\n", sexo);
			break;
		}
		else{
			printf("> O sexo digitado (%c) eh invalido! Tente novamente!\n", sexo);	
		}
	}
	return sexo;
}

char* valida_cpf(){
		char cpf_formatado[15];
		while(1){
			char cpf[15];
			short digitos = 0;
			short conta_pontos = 0;
			short conta_trav = 0;
			short valido = 0;
			printf("> CPF: ");
			fflush(stdin);
			fgets(cpf, 15, stdin);
			short pos = strcspn(cpf, "\n");
			cpf[pos] = '\0';
			for(short i = 0; cpf[i] != '\0'; ++i){
				if(cpf[i] == '.'){
					conta_pontos++;
				}
				else if(cpf[i] == '-'){
					conta_trav++;
				}
				else if(cpf[i] >= 48 && cpf[i] <= 57){
					digitos++;
				}
				else{
					printf("> Algum dos digitos eh invalido! Utilize apenas numeros, pontos e travessoes!\n");
					break;
				}
			}
			if(digitos == 11 && conta_pontos < 2 && conta_trav < 2){
				for (short i = 0, cont = 0, j = 0; cpf[i] != '\0'; ++i, j++){
					if (cont != 3 && cont != 7){
						cpf_formatado[j] = cpf[i];
						cont++;	
					}
					else if(cont == 7){
						cpf_formatado[j] = '-';
							cont++;
							--i;
					}
					else{
						if(i == 3){
							cpf_formatado[i] = '.';
							cont = 0;
						}
						else{
							cpf_formatado[i + 1] = '.';
							cont++;
						}
						i--;
					}	
				}
				valido = 1;
			}
			else if(conta_trav == 1 && conta_pontos == 2 && digitos == 11){
				strcpy(cpf_formatado, cpf);
				valido = 1;
			}
			else{
				printf("> O CPF digitado eh invalido! Tente novamente!\n");
			}
			if(valido == 1){
				cpf_formatado[14] = '\0';
				break;
			}
		}
	printf("> O CPF digitado foi: %s.\n", cpf_formatado);   
	char* string_retorno = cpf_formatado;
	return string_retorno;
}


char* valida_matricula(){
	char matricula[11];
	while(1){
		short conta_digitos;
		printf("> Matricula: ");
		fflush(stdin);
		fgets(matricula, 11, stdin);
		for(conta_digitos = 0; matricula[conta_digitos] != '\0'; ++conta_digitos){
			if(!(matricula[conta_digitos] >= 48 && matricula[conta_digitos] <= 57)){
				printf("> A matricula deve conter apenas numeros!\n");
				break;
			}
		}
		if(conta_digitos != 10){
			printf("> A matricula deve ter dez digitos!\n");
			continue;
		}
		else{
			printf("> A matricula digitada foi: %s.\n", matricula);
			break;
		}
	}	
	char* ponteiro = matricula;
	return ponteiro;
}


short valida_idade(){
	short idade = 0;
	while (1){
		printf("> Idade: ");
		fflush(stdin);
	    scanf("%hd", & idade);
		if(idade > 110 || 0 >= idade){
			printf("> A idade digita eh invalida, tente novamente!\n");
		}
		else{
			printf("> A idade digitada foi %hd.\n", idade);
			return idade;
		}
	}
}


short valida_ano(){
	short ano;
	while (1){
		printf("> Ano de nascimento: ");
		scanf("%hd", & ano);
		if(!(ano> 0 && 1920 <= ano)){
			printf("> Ano invalido! tente novamente!\n");				
		}
		else{
			break;	
		}
	}		
	return ano;
}


short valida_mes(){
	short mes;
	while (1){
		printf("> Mes de nascimento: ");
		scanf("%hd", & mes);
		if(!(mes > 0 &&  12 >= mes)){
			printf("> Mes invalido! tente novamente!\n");				
		}
		else{
			break;	
		}
	}
	return mes;
}


short valida_dia(){
	short dia;
	while (1){
		printf("> Dia de nascimento: ");
		scanf("%hd", & dia);
		if(!(dia > 0 &&  31 >= dia)){
			printf("> Dia invalido! tente novamente!\n");				
		}
		else{
			break;	
		}
	}
	return dia;
}


char* valida_nome(){
	char nome[50];
	short valido = 0; 
	while(1) {
		printf("> Nome: ");
		fgets(nome, 50, stdin);
		short pos = strcspn(nome, "\n");
		nome[pos] = '\0';
		for(short i = 0; i < strlen(nome); ++i){
			if(nome[0] >= 'a' && nome[0] <= 'z' ){
				nome[0] = nome[0] - 32;
			}
			if((!(nome[i] >= 'a' && nome[i] <= 'z')) && (!(nome[i] >= 'A' && nome[i] <= 'Z'))){
				if(nome[i] == 32){
					if(nome[i + 1] >= 'a' && nome[i + 1] <= 'z'){
						nome[i + 1] = nome[i + 1] - 32;
					}
					continue; 
				}
				valido = 0;
				break;
			}
			else{
				valido = 1;
			}
		}
		if(valido == 0){
			printf("> O nome nao pode conter acentos ou caracteres especiais!\n");
			continue;
		}
		else{
			break;
		}
	}
	printf("> %s foi definido como nome.\n", nome);
	char* ponteiro = nome;
	return ponteiro; 
}

// Funcoess de ordenacao

void ordem_nascimento(pessoa* lista_pessoas, short total_pessoas) {
    pessoa copia[total_pessoas];
    pessoa copia_copia;
    for (short k = 0; k < total_pessoas; ++k) {
        copia[k] = lista_pessoas[k];
    }
    for (short limite = total_pessoas - 1; limite >= 0; --limite) {
        for (short contador = 0; contador < limite; ++contador) {
            if (copia[contador].psdata.ano < copia[contador + 1].psdata.ano) {
                copia_copia = copia[contador + 1];
                copia[contador + 1] = copia[contador];
                copia[contador] = copia_copia;
            } else if ((copia[contador].psdata.ano == copia[contador + 1].psdata.ano) && (copia[contador].psdata.mes < copia[contador + 1].psdata.mes)) {
                copia_copia = copia[contador + 1];
                copia[contador + 1] = copia[contador];
                copia[contador] = copia_copia;
            } else if ((copia[contador].psdata.ano == copia[contador + 1].psdata.ano) && (copia[contador].psdata.mes == copia[contador + 1].psdata.mes) && (copia[contador].psdata.dia < copia[contador + 1].psdata.dia)) {
                copia_copia = copia[contador + 1];
                copia[contador + 1] = copia[contador];
                copia[contador] = copia_copia;
            }
        }
    }
    for (short i = 0; i < total_pessoas; ++i) {
        printf("%hd - Nome: %s.", i + 1, copia[i].nome);      
		printf("\n\n> CPF: %s.", copia[i].cpf);
		printf("\n\n> Matricula: %s.", copia[i].matricula);
		printf("\n\n> Sexo: %c.", copia[i].sexo);
		printf("\n\n> Idade: %hd.\n", copia[i].idade);
        printf("\n> Aniversario: (%hd/%hd/%hd).\n", copia[i].psdata.dia, copia[i].psdata.mes, copia[i].psdata.ano);
		titulo("LISTANDO PESSOAS", '-', 1);
		printf("\n");
        sleep(1);
    }
}


void ordem_alfabetica(pessoa entrada[], short total_pessoas){
    pessoa lista_pessoas[total_pessoas];
    pessoa copia;
    for(short i = 0; i < total_pessoas; ++i){
        lista_pessoas[i] = entrada[i];
    }
    for(short limite = total_pessoas; limite > 0; --limite){
        for(short limite2 = 0; limite2 < limite; ++limite2){
            if (strcmp(lista_pessoas[limite2].nome, lista_pessoas[limite2 + 1].nome) < 0){
            	copia = lista_pessoas[limite2 + 1];
            	lista_pessoas[limite2 + 1] = lista_pessoas[limite2];
            	lista_pessoas[limite2] = copia;
            }
        }
    }
    for(short nome = total_pessoas - 1, conta = 1; nome >= 0; --nome, ++conta){
        printf("%hd - Nome: %s.", conta, lista_pessoas[nome].nome);      
        printf("\n\n> CPF: %s.", lista_pessoas[nome].cpf);
        printf("\n\n> Matricula: %s.", lista_pessoas[nome].matricula);
        printf("\n\n> Sexo: %c.", lista_pessoas[nome].sexo);
        printf("\n\n> Idade: %hd.\n", lista_pessoas[nome].idade);
        titulo("LISTANDO PESSOAS", '-', 1);
        printf("\n");
        sleep(1);
    }
}



void ordem_cadastro(pessoa* lista_pessoas, short total_pessoas){
	for(short i = 0; i < total_pessoas; ++i){
		printf("%hd - Nome: %s.", i + 1, lista_pessoas[i].nome);      
		printf("\n\n> CPF: %s.", lista_pessoas[i].cpf);
		printf("\n\n> Matricula: %s.", lista_pessoas[i].matricula);
		printf("\n\n> Sexo: %c.", lista_pessoas[i].sexo);
		printf("\n\n> Idade: %hd.\n", lista_pessoas[i].idade);
		titulo("LISTANDO PESSOAS", '-', 1);
		printf("\n");
		sleep(1);
	}
}


void ordem_sexo(pessoa* lista_pessoas, short total_pessoas){
	char escolha = menu_sexo();
	switch(escolha){
		case '0':
			break;
		case'1':
			titulo("SEXO FEMININO", '-', 0);
			for(short contador = 0, aprovados = 1; contador < total_pessoas; ++contador){
				if(lista_pessoas[contador].sexo == 'F'){
					printf("%hd - Nome: %s.", aprovados, lista_pessoas[contador].nome);      
					printf("\n\n> CPF: %s.", lista_pessoas[contador].cpf);
					printf("\n\n> Matricula: %s.", lista_pessoas[contador].matricula);
					printf("\n\n> Sexo: %c.", lista_pessoas[contador].sexo);
					printf("\n\n> Idade: %hd.\n", lista_pessoas[contador].idade);
					titulo("LISTANDO PESSOAS", '-', 1);
					printf("\n");
					sleep(1);
					++aprovados;
				}
			}
			break;
		case '2':
			titulo("SEXO MASCULINO", '-', 0);
			for(short contador = 0, aprovados = 1; contador < total_pessoas; ++contador){
				if(lista_pessoas[contador].sexo == 'M'){
					printf("%hd - Nome: %s.", aprovados, lista_pessoas[contador].nome);      
					printf("\n\n> CPF: %s.", lista_pessoas[contador].cpf);
					printf("\n\n> Matricula: %s.", lista_pessoas[contador].matricula);
					printf("\n\n> Sexo: %c.", lista_pessoas[contador].sexo);
					printf("\n\n> Idade: %hd.\n", lista_pessoas[contador].idade);
					titulo("LISTANDO PESSOAS", '-', 1);
					printf("\n");
					sleep(1);
					++aprovados;
				}
			}
			break;
		default:
			titulo("OPCAO INVALIDA!", '~', 0);
			muda_tela("VOLTANDO...", 1);
	}
}


void ordem_busca(short* total1, short* total2, pessoa lista1[], pessoa lista2[]){
	char termo[50];
	short flag;
	short pos;
	short total_geral  = *total1 + *total2;
	pessoa lista_geral[total_geral];
	pessoa copia;
	
	strcpy(copia.nome, "Sem Nome");
	strcpy(copia.cpf, "000.000.000-00");
	strcpy(copia.matricula , "0000000000");
	copia.sexo = 'N';
	copia.idade = 200;
	copia.psdata.ano = 2000;
	copia.psdata.mes = 1;
	copia.psdata.dia = 1;
	copia.psdata.dia = 0;
		
	while(1){
		printf("> Digite o termo que deseja buscar (999 sai): ");
 		fgets(termo, 50, stdin);
 		pos = strcspn(termo, "\n");
		termo[pos] = '\0';
		if(strcmp("999", termo) == 0){
			break;
		}
		for(short i = 0; termo[i] != '\0'; ++i){
			if(!((termo[i] >= 65 && termo[i] <= 90) || (termo[i] >= 97 && termo[i] <= 122))){
				printf("> O termo nao pode conter caracteres especiais ou numeros!\n");
				flag = 1;
				break;
			}
		}
		if (flag == 1){
			continue;
		}
		else if(strcmp(" ", termo) == 0 || strcmp("\0", termo) == 0){
			printf("> O termo nao pode estar em branco! Tente novamente!\n");
			continue;
		}
		for(short i = 0; i < *total1; i++){
			lista_geral[i] = lista1[i];
			
		}
		for(short i = *total2, aluno = 0; i < total_geral; ++i, ++aluno){
			lista_geral[i] = lista2[aluno];
		}
		for (short limite = total_geral; limite > 0; --limite) {
	        for (short limite2 = 0; limite2 < limite; ++limite2) {
	            if (strcmp(lista_geral[limite2].nome, lista_geral[limite2 + 1].nome) > 0){
	             	copia = lista_geral[limite2 + 1];
					lista_geral[limite2 + 1] = lista_geral[limite2];
					lista_geral[limite2] = copia;
	            }
	        }
	    }
	printf("> Resultados da busca por \"%s\":\n", termo);
	titulo("> Digite qualquer tecla para volta", '-', 1);
	printf("\n");
	for(short i = 0, aprovados = 0, valido = 0; i < total_geral; ++i){
		for(short j = 0, c = 0; lista_geral[i].nome[c] != '\0'; ++c){
			if(lista_geral[i].nome[c] == termo[j] || lista_geral[i].nome[c] == termo[j] - 32){
				if(j == strlen(termo) - 1){
					j = 0;
					++aprovados;
					++valido;
					break;
					}
				else
					++j;
				}
				else if (j > 0 && lista_geral[i].nome[c] != termo[j]){
					j = 0;
			}	
		}
		if(valido != 0){
			printf("%d - %s.", aprovados, lista_geral[i].nome);
			if(lista_geral[i].id == 0){
				if(lista_geral[i].sexo == 'M'){
				printf(" - Aluno.\n");
				}
				else{
					printf(" - Aluna.\n");
				}
			}
			else if (lista_geral[i].id == 1){
				if(lista_geral[i].sexo == 'M'){
				printf(" - Professor.\n");
				}
				else{
				printf(" - Professora.\n");
				}
			}
			else{
				printf("\n");
			}
			valido = 0;
		}
		if((aprovados) == 0 && (i == total_geral - 1)){
			printf("> Oops, parece que nao ha resultados para a sua busca!\n> Tente novamente com outros termos!\n");
		}
	}
	break;
	}
}


// Funcoes de modificacao

pessoa cadastra_pessoas(pessoa *lista_pessoas, short *total_pessoas) {
    pessoa nova_pessoa;
    char* string_retorno;

	string_retorno = valida_nome();
	strcpy(nova_pessoa.nome, string_retorno);

	string_retorno = valida_cpf();
	strcpy(nova_pessoa.cpf, string_retorno);

	string_retorno = valida_matricula();
	strcpy(nova_pessoa.matricula, string_retorno); 	

	nova_pessoa.sexo = valida_sexo();	   

	nova_pessoa.idade = valida_idade();

	nova_pessoa.psdata.ano = valida_ano();
	nova_pessoa.psdata.mes = valida_mes();
	nova_pessoa.psdata.dia = valida_dia();  		

    titulo("PESSOA CADASTRADA COM SUCESSO!", '-' , 0);
    
    lista_pessoas[*total_pessoas] = nova_pessoa;
    (*total_pessoas)++;
    return nova_pessoa;
}


void atualiza_cadastro(pessoa *entrada){
	char* string_retorno;
	titulo("ACESSANDO CADASTRO...", '-', 0);
	sleep(2);
	system("cls");
	while(1){
	titulo(entrada->nome, '-', 0);
		char escolha = menu_atualizacao();
		if(escolha == '0')
			break;
		switch(escolha){
			case '1':
				string_retorno = valida_nome();
				strcpy(entrada->nome, string_retorno);
				titulo("PESSOA ATUALIZADA COM SUCESSO", '-', 0);
				sair_menu();
				break;
			case '2':
				string_retorno = valida_cpf();
				strcpy(entrada->cpf, string_retorno);
				titulo("PESSOA ATUALIZADA COM SUCESSO", '-', 0);
				sair_menu();
				break;
			case '3':
				string_retorno = valida_matricula();
				strcpy(entrada->matricula, string_retorno);
				titulo("PESSOA ATUALIZADA COM SUCESSO", '-', 0);
				sair_menu();
				break;
			case '4':
				entrada->sexo = valida_sexo();
				titulo("PESSOA ATUALIZADA COM SUCESSO", '-', 0);
				sair_menu();
				break;
			case '5':
				entrada->idade = valida_idade();
				titulo("PESSOA ATUALIZADA COM SUCESSO", '-', 0);
				sair_menu();
				break;
			case '6':
				entrada->psdata.ano = valida_ano();
				entrada->psdata.mes = valida_mes();
				entrada->psdata.dia = valida_dia();
				titulo("PESSOA ATUALIZADA COM SUCESSO", '-', 0);
				sair_menu();	
				break;
			default:
	    		titulo("OPCAO INVALIDA!", '~', 0);
				muda_tela("VOLTANDO...", 1);	
		}
	}
}



void exclui_cadastro(pessoa* lista_pessoas, short posicao, short * total_pessoas){
	char copia_nome[50];
	
	// Padronizando a string
	
	strcpy(copia_nome, lista_pessoas[posicao].nome);
	strcpy(lista_pessoas[posicao].nome, "Sem Nome");
	strcpy(lista_pessoas[posicao].cpf, "000.000.000-00");
	strcpy(lista_pessoas[posicao].matricula , "0000000000");
	lista_pessoas[posicao].sexo = 'N';
	lista_pessoas[posicao].idade = 200;
	lista_pessoas[posicao].psdata.ano = 2000;
	lista_pessoas[posicao].psdata.mes = 1;
	lista_pessoas[posicao].psdata.dia = 1;
	lista_pessoas[posicao].psdata.dia = 0;
	
	pessoa copia;
	for(short total =*total_pessoas; total > 0; -- total){
		for(short i = 0; i < total; ++i ){
			if(lista_pessoas[i].idade == 200){
				copia = lista_pessoas[i + 1];
				lista_pessoas[i + 1] = lista_pessoas[i];
				lista_pessoas[i] = copia;
			}
		}
	}
	printf("> Apagando cadastro de %s...\n", copia_nome);
	sleep(2);
	titulo("CADASTRO REMOVIDO COM SUCESSO!", '-', 0);
	(*total_pessoas)--;
}

// Programa principal
    
void main(void){
	pessoa lista_alunos[maximo];
	pessoa lista_professores[maximo];
	short total_geral = 5;
	short total_alunos = total_geral;
	short total_professores = total_geral;
	char* string_retorno;
	char escolha;
	
	// ALuno(s) de teste:
	
	strcpy(lista_alunos[0].nome, "Luis Ribeiro");
	strcpy(lista_alunos[0].cpf, "789.853.354-14");
	strcpy(lista_alunos[0].matricula , "9875641052");
	lista_alunos[0].sexo = 'M';
	lista_alunos[0].idade = 20;
	lista_alunos[0].psdata.ano = 2003;
	lista_alunos[0].psdata.mes = 01;
	lista_alunos[0].psdata.dia = 27;
	lista_alunos[0].id = 0;
	
	strcpy(lista_alunos[1].nome, "Maria Josfa");
	strcpy(lista_alunos[1].cpf, "687.021.432-00");
	strcpy(lista_alunos[1].matricula , "4892140641");
	lista_alunos[1].sexo = 'F';
	lista_alunos[1].idade = 15;
	lista_alunos[1].psdata.ano = 2008;
	lista_alunos[1].psdata.mes = 12;
	lista_alunos[1].psdata.dia = 01;
	lista_alunos[1].id = 0;
	
	strcpy(lista_alunos[2].nome, "Ana Clara");
	strcpy(lista_alunos[2].cpf, "589.072.547-78");
	strcpy(lista_alunos[2].matricula , "2142686361");
	lista_alunos[2].sexo = 'F';
	lista_alunos[2].idade = 17;
	lista_alunos[2].psdata.ano = 2006;
	lista_alunos[2].psdata.mes = 05;
	lista_alunos[2].psdata.dia = 06;
	lista_alunos[2].id = 0;
	
	strcpy(lista_alunos[3].nome, "Carlos Daniel");
	strcpy(lista_alunos[3].cpf, "226.464.135-54");
	strcpy(lista_alunos[3].matricula , "6974643216");
	lista_alunos[3].sexo = 'M';
	lista_alunos[3].idade = 27;
	lista_alunos[3].psdata.ano = 1996;
	lista_alunos[3].psdata.mes = 07;
	lista_alunos[3].psdata.dia = 13;
	lista_alunos[3].id = 0;
	
	strcpy(lista_alunos[4].nome, "Isabel Cristina");
	strcpy(lista_alunos[4].cpf, "415.357.108-36");
	strcpy(lista_alunos[4].matricula , "9875641052");
	lista_alunos[4].sexo = 'F';
	lista_alunos[4].idade = 54;
	lista_alunos[4].psdata.ano = 1969;
	lista_alunos[4].psdata.mes = 10;
	lista_alunos[4].psdata.dia = 2;
	lista_alunos[4].id = 0;
	
	// Professor(es) de teste
	
	strcpy(lista_professores[0].nome, "Pedro Maroos");
	strcpy(lista_professores[0].cpf, "215.967.346-15");
	strcpy(lista_professores[0].matricula, "9572602793");
	lista_professores[0].sexo = 'M';
	lista_professores[0].idade = 34;
	lista_professores[0].psdata.ano = 1989;
	lista_professores[0].psdata.mes = 03;
	lista_professores[0].psdata.dia = 27;
	lista_professores[0].id = 1;
	
	strcpy(lista_professores[1].nome, "Julia Menescau");
	strcpy(lista_professores[1].cpf, "377.942.125-01");
	strcpy(lista_professores[1].matricula, "9728643025");
	lista_professores[1].sexo = 'F';
	lista_professores[1].idade = 40;
	lista_professores[1].psdata.ano = 1983;
	lista_professores[1].psdata.mes = 05;
	lista_professores[1].psdata.dia = 06;
	lista_professores[1].id = 1;
	
	strcpy(lista_professores[2].nome, "Claudio Freitas");
	strcpy(lista_professores[2].cpf, "157.789.165-23");
	strcpy(lista_professores[2].matricula, "7268043621");
	lista_professores[2].sexo = 'M';
	lista_professores[2].idade = 30;
	lista_professores[2].psdata.ano = 1993;
	lista_professores[2].psdata.mes = 05;
	lista_professores[2].psdata.dia = 04;
	lista_professores[2].id = 1;
	
	strcpy(lista_professores[3].nome, "Raimunda Silva");
	strcpy(lista_professores[3].cpf, "578.245.267-05");
	strcpy(lista_professores[3].matricula, "1663232985");
	lista_professores[3].sexo = 'F';
	lista_professores[3].idade = 25;
	lista_professores[3].psdata.ano = 1998;
	lista_professores[3].psdata.mes = 10;
	lista_professores[3].psdata.dia = 03;
	lista_professores[3].id = 1;
	
	strcpy(lista_professores[4].nome, "Mathias Sants");
	strcpy(lista_professores[4].cpf, "754.731.732-45");
	strcpy(lista_professores[4].matricula, "25653670434");
	lista_professores[4].sexo = 'M';
	lista_professores[4].idade = 20;
	lista_professores[4].psdata.ano = 1998;
	lista_professores[4].psdata.mes = 10;
	lista_professores[4].psdata.dia = 27;
	lista_professores[4].id = 1;
	
    for(short menu = 0, sair = 1; sair != 0;){
    	if (menu == 0){
			escolha = menu_principal();
	        switch(escolha){
	        	case '0':
	        		printf("\n");
	        		titulo("ENCERRANDO...", '-', 0);
	        		sair = 0;
	        		break;
				case '1':
	        		menu = 1;
	        		break;
	        	case '2':
	        		menu = 2;
	        		break;
	        	case '3':
	        		menu = 3;
	        		break;
	        	case '4':
	        		menu = 4;
	        		break;
	        	default:
	        		titulo("OPCAO INVALIDA!", '~', 0);
					muda_tela("VOLTANDO...", 1);
					continue;
			}
		}
		if (menu == 1){
			escolha = menu_aluno();
			switch(escolha){
		    	case '0':
		    		menu = 0;
		    		break;
				case '1':
					titulo("LISTANDO ALUNOS", '-', 0);
					ordem_cadastro(lista_alunos, total_alunos);
		    		break;
		    	case '2':
		    		titulo("ALUNOS EM ORDEM ALFABETICA", '-', 0);	
					ordem_alfabetica(lista_alunos, total_alunos);
					break;
		    	case '3':
		    		ordem_sexo(lista_alunos, total_alunos);
		    		break;
		    	case '4':
					titulo("ALUNOS POR DATA DE NASCIMENTO", '-', 0);
					ordem_nascimento(lista_alunos, total_alunos);
		    		break;
		    	case '5':
		    		titulo("CADASTRO DE NOVO ALUNO", '-', 0);
		    		lista_alunos[total_alunos] = cadastra_pessoas(lista_alunos, &total_alunos);
		    		lista_alunos[total_alunos - 1].id = 0;
					break;
				case '6':
					while(1){
						short num_aluno = 0;
						titulo("LISTANDO TODOS OS CADASTROS", '-', 0);
						ordem_cadastro(lista_alunos, total_alunos);
						titulo("> Escolha qual cadastro deseja atualizar: ", '-', 1);
						printf("\n> Escolha qual cadastro deseja atualizar (999 sai): ");
						scanf("%hd", & num_aluno);
						if(num_aluno == 999){
							muda_tela("VOLTANDO...", 0);
							break;
						}
						else if(num_aluno > total_alunos || 0 >= num_aluno){
							system("cls");
							titulo("NAO EXISTE CADASTRO COM O NUMERO DIGITADO!", '-', 0);
						}
						else{
							atualiza_cadastro(&lista_alunos[num_aluno - 1]);
							break;
						}
					}
					break;
				case '7':
					while(1){
						short num_aluno = 0;
						titulo("LISTANDO TODOS OS CADASTROS", '-', 0);
						ordem_cadastro(lista_alunos, total_alunos);
						titulo("> Escolha qual cadastro deseja excluir: ", '-', 1);
						printf("\n> Escolha qual cadastro deseja excluir (999 sai): ");
						scanf("%hd", & num_aluno);
						if(num_aluno == 999){
							muda_tela("VOLTANDO...", 0);
							break;
						}						
						else if(num_aluno > total_alunos || 0 >= num_aluno){
							printf("> Nao existe cadastro com o numero digitado!");
							system("cls");
						}
						else{
							exclui_cadastro(lista_alunos, num_aluno - 1, &total_alunos);
							break;
						}
					}
					break;
		    	default:
					titulo("OPCAO INVALIDA!", '~', 0);
					sleep(1);
					muda_tela("VOLTANDO...", 1);
					continue;
		    		break;
		    	}
		    }
		if (menu == 2){
			escolha = menu_professor();
			switch(escolha){
		    	case '0':
		    		menu = 0;
		    		break;
				case '1':
					titulo("LISTANDO PROFESSORES", '-', 0);
					ordem_cadastro(lista_professores, total_professores);
		    		break;
		    	case '2':
		    		titulo("PROFESSORES EM ORDEM ALFABETICA", '-', 0);
					ordem_alfabetica(lista_professores, total_professores);
		    		break;
		    	case '3':
		    		break;
		    	case '4':
		    		titulo("PROFESSORES POR DATA DE NASCIMENTO", '-', 0);
		    		ordem_nascimento(lista_alunos, total_alunos);
		    		break;
		    	case '5':
		    		titulo("CADASTRO DE NOVO PROFESSOR", '-', 0);
		    		lista_professores[total_alunos] = cadastra_pessoas(lista_professores, &total_professores);
		    		lista_professores[total_professores - 1].id = 1;
					break;
				case '6':
					while(1){
						short num_professor = 0;
						titulo("LISTANDO TODOS OS CADASTROS", '-', 0);
						ordem_cadastro(lista_professores, total_professores);
						titulo("> Escolha qual cadastro deseja atualizar: ", '-', 1);
						printf("\n> Escolha qual cadastro deseja atualizar (999 sai): ");
						scanf("%hd", & num_professor);
						if(num_professor == 999){
							muda_tela("VOLTANDO...", 0);
							break;
						}		
						else if(num_professor > total_professores || 0 >= num_professor){
							system("cls");
							titulo("NAO EXISTE CADASTRO COM O NUMERO DIGITADO!", '-', 0);
						}
						else{
							atualiza_cadastro(&lista_professores[num_professor - 1]); 
							break;
						}
					}
					break;
				case '7':
					while(1){
						short num_professor = 0;
						titulo("LISTANDO TODOS OS CADASTROS", '-', 0);
						ordem_cadastro(lista_professores, total_professores);
						titulo("> Escolha qual cadastro deseja excluir: ", '-', 1);
						printf("\n> Escolha qual cadastro deseja excluir (999 sai): ");
						scanf("%hd", & num_professor);
						if(num_professor == 999){
							muda_tela("VOLTANDO...", 0);
							break;
						}							
						else if(num_professor > total_professores || 0 >= num_professor){
							printf("> Nao existe cadastro com o numero digitado!");
							system("cls");
						}
						else{
							exclui_cadastro(lista_professores, num_professor - 1, &total_professores);
							break;
						}
					}
					break;					
		    	default:
		    		titulo("OPCAO INVALIDA!", '~', 0);
					muda_tela("VOLTANDO...", 1);
					continue;
			}
		}
		if(menu == 3){
			escolha = menu_disciplinas();
			switch(escolha){
	        	case '0':
	        		menu = 0;
	        	default:
	        		titulo("OPCAO INVALIDA!", '~', 0);
					muda_tela("VOLTANDO...", 1);
					continue;
			}	
		}
		if(menu == 4){
			escolha = menu_busca();
			switch(escolha){
	        	case '0':
	        		menu = 0;
	        		break;
	           	case '1':
					ordem_busca(&total_alunos, &total_professores, lista_alunos, lista_professores);
				break; 
	        	default:
	        		titulo("OPCAO INVALIDA!", '~', 0);
					muda_tela("VOLTANDO...", 1);
					continue;
			}
		}
		if(sair != 0){
			sair_menu();
		}
	}
	system("pause");
}
