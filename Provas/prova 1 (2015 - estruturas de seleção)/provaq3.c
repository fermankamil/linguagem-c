#include <stdlib.h>
#include <stdio.h>
int main(){
	double numero1, numero2, numero3, numero4, media;
	printf("Por favor, digite as quatro notas do aluno, separadas por espacos:\n");
	scanf("%lf%lf%lf%lf",&numero1,&numero2,&numero3,&numero4);
	if (numero1<numero2 && numero1<numero3 && numero1<numero4)
	media=(numero2+numero3+numero4)/3;
	if (numero2<numero1 && numero2<numero3 && numero2<numero4);
	media=(numero1+numero3+numero4)/3;
	if (numero3<numero4 && numero3<numero2 && numero3<numero1);
	media=(numero4+numero2+numero1)/3;
	if (numero4<numero3 && numero4<numero2 && numero4<numero1);
	media=(numero3+numero2+numero1)/3;
	printf("A media eh igual a:%0.lf.\n", media);
	system("pause");
	return 0;

}