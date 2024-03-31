#include <stdio.h>
#include <stdlib.h>

int calculaCuadrado(int num);
void cuadradoNumeroVoid(int num);
void datosVariable(int *p_num);
void invertir(int *a, int *b);

int main(){

    int num, cuadrado, a, b;

    // Prueba funcion cuadrado
    printf("Ingrese un numero:");
    scanf("%d",&num);
    cuadrado = calculaCuadrado(num);
    printf("El cuadrado es: %d", cuadrado);
  
    cuadradoNumeroVoid(num); 

    // Prueba funcion invertir 
    printf("\n\nIngrese dos valores:");
    scanf("%d %d", &a, &b);
    printf("a = %d , b = %d", a,b);
    invertir(&a,&b);
    printf("\na = %d , b = %d", a,b);

    return 0;
}

// Función que devuelva el cuadrado de un número
int calculaCuadrado(int num){
    return (num*num);
}

//Función calculaCuadrado, pero devolviendo un tipo void
void cuadradoNumeroVoid(int num){
    int cuadrado;
    cuadrado= num*num;
    printf("\nEl cuadrado de %d es: %d ", num, cuadrado);
}

void datosVariable(int *p_num){
    printf("\n\nDireccion en la funcion %d", p_num); 
    printf("\nVariable: %d", *p_num);
}

void invertir(int *a, int *b){ //recibe las direcciones de a y b
    int aux;
    aux= *a; 
    *a = *b; 
    *b = aux;
}

