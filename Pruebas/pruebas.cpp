#include <stdio.h>
#include <string>
#include <iostream>

int main(int argc, char const *argv[]){
    int numero = 43;
    int *pNum = &numero;

    printf("%d",*pNum);

    //Declaro un puntero x, reservo un espacio de memoria en donde se va a guardar un integer, le asigno un valor y por ultimo el dato apuntado del puntero.
    int *x=new int;
    *x=32;
    delete x;

    printf("%d\n",x);

    ////////////////////////////////////////

    int numero2=10;
    int *pNumero2 = &numero2;
    int *pNumero3 = &numero2;

    *pNumero2=15;
    *pNumero3=145;

    printf("%d\n",*pNumero2);
    printf("%d\n",*pNumero3);
    printf("%d\n", numero2);

    return 0;
}
