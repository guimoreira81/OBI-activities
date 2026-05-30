#include <stdio.h>

int main(){
	int inteiro;
	printf("Digite um número inteiro:\n");
	if (scanf("%d", &inteiro) != 1){
		printf("Input inválido");
        return 0;
	}
    printf("Input válido\n");
	return 0;
}