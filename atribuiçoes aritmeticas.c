#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	int dad1;
	
	printf("Digite um dado inteiro não negativo");
	scanf("%d",&dad1);
	printf("valor do dado antes do incremento: %d\n", dad1);
	dad1++;	
	printf("valor do dado depois do incremento: %d\n", dad1);
	dad1--;
	printf("valor do dado depois do decremento: %d\n", dad1);
	dad1+= 2;
	printf("valor do dado depois do incremento em 2 unidades:%d\n", dad1);
	dad1-= 4;	
	printf("valor do dado depois do decremento: %d\n", dad1);
	dad1 *= 10;
	printf("valor depois da multiplicação por 10: %d\n", dad1);
	dad1 /= 5;
	printf("valor do dado depois de dividir por 5: %f\n", (float)dad1);
	
	return 0;
	
}
