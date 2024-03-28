#include <stdio.h>
#include <stdlib.h>


int main()
{
    //printf("hola mundo");

   /* 
    3) la dirección de memoria de la variable.
    4) la dirección de memoria del puntero.
    5) el tamaño de memoria utilizado por esa variable usando la
    función sizeof() */

    float num = 1.5; //Declaracion de variable y puntero
    float *p_num;

    p_num = &num; //Guardamos la direccion de la variable en el puntero


    printf("Contenido del puntero : %f", *p_num);
    printf("\nDireccion de memoria almacenada por el puntero : %d", p_num);
    printf("\nDireccion de la variable : %d", &num);
    printf("\nDireccion del puntero : %d", &p_num);
    printf("\nTamaño de memoria utilizado : %d", sizeof(num));

    return 0;
}