/*Valeria Irais Ramírez Sánchez
Práctica 8*/

#include <stdio.h>
#define MAX 5
int main(){
    int arreglo [MAX], cont;
    for (cont=0, cont<MAX, cont++){
        printf("Ingrese el valor %d del arreglo: ",cont+1);
        scanf("%i", &arreglo[cont]);
    }
    printf("El valor ingresado para cada elemneto del arreglo es:\n[");
    for(cont=0, cont<MAX; cont++){
        printf("%d\t", arreglo[cont]);
    }
    return 0;
}
