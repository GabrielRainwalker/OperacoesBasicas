#include <stdio.h>
#include <stdlib.h>
#define TEXTO "OPERACOES LOGICAS BASICAS EM C"

int main(){
	printf("%s\n\n",TEXTO);
	
	float A;
	float B;
	float C = A + B;
	float D = A - B;
	float E = A * B;
	float F = A / B;
	
	printf("Digite o valor de A: ");
	scanf("%f",&A);
	
	printf("Digite o valor de B: ");
	scanf("%f",&B);
	
	C = A + B;
	D = A - B;
	E = A * B;
	F = A / B;
	printf("A + B = \n",C);
	printf("A - B = \n",D);
	printf("A * B = \n",E);
	printf("A / B = \n",F);
	
	return 0;
}
