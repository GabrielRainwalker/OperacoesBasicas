#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	int n1, n2, resultado;
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite o primeiro número da conta: ");
	scanf("%d", &n1);
	printf("Digite o segundo número da conta: ");
	scanf("%d", &n2);
	resultado = n1 + n2;
	printf("O resultado da soma é: ", resultado);
	
	return 0;
}
