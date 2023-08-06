#include "Punto.h"
#include <stdio.h>

int main(int argc, char const *argv[]){
    Punto p = crearPunto(3, 4);

    printf("%f, %f", coordX(p), coordY(p));
    return 0;
}
