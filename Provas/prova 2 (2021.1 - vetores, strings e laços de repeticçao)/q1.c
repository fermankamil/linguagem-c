#include <stdio.h>
#include <stdlib.h>
int main(void){
	int divisor,count=0,down,aux=0,v1[10]={2,3,4,5,6,12,1,23,11,32},v2[10]={2,31,4,51,16,12,1,23,111,323},resultado[10];	
	printf("> Os numeros presentes no primeiro array, mas ausentes no segundo sao:");
	for(count=0;count<9;++count){
		for(down=0;down<9;++down){
			if(v1[count]!=v2[down])
				aux=0;
			else if(v1[count]==v2[down]){
				aux=1;
				break;
			}
		}
		if(aux==0)
			printf(" %d ",v1[count]);
	}
	for(count=0;count<=9;++count){
		resultado[count]=v1[count]+v2[count];
	}
	printf("\n> A array 1 contem os numeros:");
	for(count=0;count<=9;++count){
		printf("% d ",v1[count]);
	}
	printf("\n> A array 2 contem os numeros:");
	for(count=0;count<=9;++count){
		printf("% d ",v2[count]);
	}
	printf("\n> A soma das arrays eh:");
	for(count=0;count<=9;++count){
		printf("% d ",resultado[count]);
	}
	printf("\n\n> no primeiro array, os seguintes numeros sao primos:");
	for(count=0;count<=9;++count){
		for(divisor=2;divisor<v1[count];++divisor){
			if(v1[count]%divisor==0){
				aux=0;
				break;
			}
			else
				aux=1;
		}
		if(aux==1){
			printf(" %d ",v1[count]);
		}
	}
	printf("\n\n> no segundo array, os seguintes numeros sao primos:");
	for(count=0;count<=9;++count){
		for(divisor=2;divisor<v2[count];++divisor){
			if(v2[count]%divisor==0){
				aux=0;
				break;
			}
			else
				aux=1;
		}
		if(aux==1){
			printf(" %d ",v2[count]);
		}
	}
	printf("\n\n> na soma das arrays, os seguintes numeros sao primos:");
	for(count=0;count<=9;++count){
		for(divisor=2;divisor<resultado[count];++divisor){
			if(resultado[count]%divisor==0){
				aux=0;
				break;
			}
			else
				aux=1;
		}
		if(aux==1){
			printf(" %d ",resultado[count]);
		}
	}
}