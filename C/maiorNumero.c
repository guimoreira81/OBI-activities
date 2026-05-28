#include <stdio.h>

/*
Em C, int array[] e int *array são a mesma coisa
*/

int maiorItem(int *array, int tamanho){
    int resultado = 0;
    for (int i = 0; i<tamanho; i++){
        if (array[i] > resultado){
            resultado = array[i];
        }
    }
    return resultado;
}


int main(){
    int teste[3] = {1, 2, 3};
    printf("Maior Item: %d", maiorItem(teste, 3));
    return 0;
}