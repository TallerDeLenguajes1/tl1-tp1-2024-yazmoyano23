#include <stdio.h>
#include <stdlib.h>

int calculaCuadrado(int num);

int main(){

    int num, cuadrado;
    printf("Ingrese un numero:");
    scanf("%d",&num);

    cuadrado = calculaCuadrado(num);

    printf("El cuadrado es: %d", cuadrado);

    return 0;
}

int calculaCuadrado(int num){
    
    return (num*num);
}