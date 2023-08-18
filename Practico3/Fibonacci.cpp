#include <stdio.h>

int fibonacci(int posicion){
    if(posicion<2){
        return posicion;
    }
    return fibonacci(posicion-1) + fibonacci(posicion-2);
}

int main(int argc, char const *argv[]){
    printf("%d", fibonacci(8));
    return 0;
}