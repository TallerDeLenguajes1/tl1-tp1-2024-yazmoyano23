#include <stdio.h>
#include <stdlib.h>

int calculaCuadrado(int num);
void cuadradoNumeroVoid(int num);
void datosVariable(int *p_num);
void invertir(int *a, int *b);
void orden(int *a, int *b);

int main(){

    int num, cuadrado, a, b, c, d;

    // Prueba funcion cuadrado
    printf("Ingrese un numero:");
    scanf("%d",&num);
    cuadrado = calculaCuadrado(num);
    printf("El cuadrado es: %d", cuadrado);
  
    //Prueba funcion cuadrado void
    cuadradoNumeroVoid(num); 

    // Prueba funcion invertir 
    printf("\n\nIngrese dos valores:");
    scanf("%d %d", &a, &b);
    printf("a = %d , b = %d", a,b);
    invertir(&a,&b);
    printf("\na = %d , b = %d", a,b);

    //Prueba funcion orden
    printf("\n\nIngrese dos valores:");
    scanf("%d %d", &c, &d);
    printf("\nc = %d , d = %d", c,d);
    orden(&c,&d);

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

void orden(int *a, int *b){ //Se guarda en a el valor mas chico
    if (*b < *a) { 
       invertir(a,b);
    } 

    printf("\nc = %d , d = %d", *a,*b);  
}
