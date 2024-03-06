#include <stdio.h>
#include <stdlib.h>

int main(){
	float peso,altura,imc;
	printf("seu peso");
	scanf("%f",&peso);
	printf("digite sua altura");
	scanf("%f",&altura);
	imc = peso /(altura*altura);
	printf ("seu imc eh %f",imc);
}
