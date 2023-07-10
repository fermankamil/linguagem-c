#include <stdio.h>
#include <stdlib.h>
int main(){
int cartao=0,hora=0,u1=0,u2=0,u3=0,u4=0,u5=0,d1=0,d2=0,d3=0,d4=0,d5=0,c1=0,c2=0,c3=0,c4=0,c5=0,m1=0,m2=0,m3=0,m4=0,m5=0;
printf("> Digite o numero do cartao:");
scanf("%i", &cartao);
printf("\n> Digite o horario da tracsaçao:");
scanf("%i",&hora);
if(cartao>=9999 || hora>=9999){
system("pause");
printf("\n> Um dos numeros digitados eh invalido!");
}
m1=cartao/1000;
c1= (cartao%1000)/100;
d1= (cartao%1000)%100/10;
u1= (cartao%1000)%100%10;
m2=hora/1000;
c2= (hora%1000)/100;
d2= (hora%1000)%100/10;
u2= (hora%1000)%100%10;
if(m1>m2)
	m3=m1;
else
	m3=m2;
if(c1>c2)
 c3= c1;
else
	c3=c2;
if(d1>d2)
	d3=d1;
else
	d3=d2;
if(u1>u2)
	u3=u1;
else
	u3=u2;
if(m1<m2)
	m4=m1;
else
	m4=m2;
if(c1<c2)
	c4=c1;
else
	c4=c2;
if(d1<d2)
	d4=d1;
else
	d4=d2;
if(u1<u2)
	u4=u1;
else
	u4=u2;
printf("O numero somando apenas os maiores eh:\n%i\n%i\n%i\n%i\n",m3,c3,d3,u3);
printf("O numero com apenas os menores diagios eh:\n%i\n%i\n%i\n%i\n",m4,c4,d4,u4);
m5=m3-m4;
c5=c3-c4;
d5=d3-d4;
u5=u3-u4;
printf("%i%i%i%i",m5,c5,d5,u5);

}