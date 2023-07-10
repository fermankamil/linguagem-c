# include <stdio.h>

int main(){
	float total_aulas;
	float total_faltas;
	float total_presenca;
	float porcentagem;
	float faltas_dispo;
	printf("> Total de aulas: ");
	scanf("%f", & total_aulas);
	printf("> Total de falta: ");
	scanf("%f", & total_faltas);
	porcentagem = (total_faltas / total_aulas) * 100;
	total_presenca = total_aulas - total_faltas;
	faltas_dispo = (total_presenca / total_aulas) * 100;
	printf("> Voce tem %.2f de falta e %.2f de presenca.", porcentagem, faltas_dispo);
	return 0;
}
