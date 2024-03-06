#include <stdio.h>
#include <stdlib.h>
#define TEXTO "OPERACOES LOGICAS BASICAS EM C"

int main(){
	printf("%s\n\n",TEXTO);
	
	int A;
	int B;
	float C = A + B;
	float D = A - B;
	float E = A * B;
	float F = A / B;
	
	printf("Digite o valor de A");
	scanf("%d",&A);
	
	printf("Digite o valor de B");
	scanf("%d",&B);
	
	printf("A + B = %f\n",C);
	printf("A - B = %f\n",D);
	printf("A * B = %f\n",E);
	printf("A / B = %f\n",F);
	
	return 0;
}
