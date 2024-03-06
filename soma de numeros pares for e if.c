#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num1;
	int limite = 0;
	
	for (num1 = 1; num1 <=100; num1++){
		if (num1 % 2 == 0){
			limite += num1;
		}
	}
	printf("A soma dos números pares de 1 a 100 é: %d\n", limite);
	
	return 0;
}
