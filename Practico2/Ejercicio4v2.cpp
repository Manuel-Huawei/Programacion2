#include <stdio.h>

/* Inserta 'elem ' en 'A' y deja ordenado A[0 .. pos].
Precondición: 'A' es un arreglo de tamaño mayor a 'pos' y A[0.. pos-1] está ordenado.*/

void insertar (int *A , int pos , float elem ) {
    int i = pos - 1;
    while ((i >= 0) && ( A [i ] > elem ) ) {
        A [i + 1] = A [i];
        i --;
    }
    A [i+1] = elem ;
}

int main(int argc, char const *argv[]){
    int array[8] = {1,2,6,7,9,10,11};
    insertar(array, 7, 5);

    for (int i = 0; i < 8; i++){
        printf("%d-", array[i]);
    }

    return 0;

}
