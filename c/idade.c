#include <stdio.h>

int main(){
    int a = 0, c = 0, b = 0;
    if (scanf("%d%d%d", &a, &b, &c) != 3){
        printf("Erro de != 3");
        return 0;
    }
    
    int maior = 0, menor = 0, resultado = 0;
    int resultadoDecidido = 0;
    if (a>b && a>c){
        maior = a;
    }
    if (b>a && b>c){
        maior = b;
    }
    if (c>a && c>b){
        maior = c;
    }
    if (a<b && a<c){
        menor = a;
    }
    if (b<a && b<c){
        menor = b;
    }
    if (c<a && c<b){
        menor = c;
    }
    if (a == b && b == c){
        resultado = a;
        resultadoDecidido = 1;
    }
    
    
    if (a != maior && a != menor){
        resultado = a;
        resultadoDecidido = 1;
    }
    if (b != maior && b != menor){
        resultado = b;
        resultadoDecidido = 1;
    }
    if (c != maior && c != menor){
        resultado = c;
        resultadoDecidido = 1;
    }
    int numeros[] = {a, b, c};
    if (resultadoDecidido == 0){
        for (int i = 1; i<3; i++){
            if (numeros[i] == numeros[i-1]){
                resultado = i;
                resultadoDecidido = 1;
            }
        }
    }

    if ((maior > 100 || menor < 5) && resultadoDecidido == 0){
        printf("Erro de extremo %d %d %d", maior, menor, resultadoDecidido);
        return 0;
    }
    
    printf("%d", resultado);
    return 0;
}