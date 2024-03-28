#include <stdio.h>
#include <stdlib.h>


int main()
{
    printf("hola mundo");

    float num = 1.5; //Declaracion de variable y puntero
    float *p_num;

    p_num = &num; //Guardamos la direccion de la variable en el puntero


    printf("Contenido del puntero : %f", *p_num);
    printf("\nDireccion de memoria almacenada por el puntero : %d", p_num);
    printf("\nDireccion de la variable : %d", &num);
    printf("\nDireccion del puntero : %d", &p_num);
    printf("\nTamaño de memoria utilizado : %d bytes", sizeof(num)); 

    return 0;
}