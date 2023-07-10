# include <stdio.h>
# include <stdlib.h>
# include <time.h>
int main (void){
	char n[3][25];
	int count, sort;
	srand((unsigned)time(NULL));
	for (count = 0; count < 4; ++count){
		printf("> Digite o nome do %io aluno: ", count+1);
		fflush(stdin);
		gets(n[count]);
	}
	sort=1+(rand()%2);
	printf("> O azarado foi: %s.", n[sort]);
	system('pause');
}