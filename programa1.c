/*Valeria Irais Ramírez Sánchez
Práctica 8*/
#include <stdio.h>
int main(){
    int num, cont = 0;
    printf("\a----- Tabla de multiplicar -----\n");
    printf("Ingrese un número: \n");
    scanf("%d", &num);
    printf("La tabla de multiplicar del %d es:\n",num);
    while(cont<=10){ //si ponemos antes el ++ como en el maunla primero se aumenta y leugo se evalua
        printf("%d x %d = %d\n", num, cont, num*cont);
        cont++;
    }
    return 0;
}
