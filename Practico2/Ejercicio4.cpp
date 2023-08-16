#include <stdio.h>

/* Inserta 'elem ' en 'A' y deja ordenado A[0 .. pos ].
Precondición: 'A' es un arreglo de tamaño mayor a 'pos' y
A[0..pos-1] est á ordenado .
*/

void insertar (int *A , int pos , int elem ) {
    int i = pos-1;

    while ((i>= 0) && (A[i]>elem)) {
        A [i+1] = A [i];
        i--;
    }

    A [i+1] = elem;
}

/* Ordena A[0 .. n - 1]. */
void insSort (int *A , int n ) {
    for (int i = 1; i < n ; i++)
        insertar (A , i-1 , A [i]);
}


int main(int argc, char const *argv[]){
    int array[6] = {2,3,5,6,7};

    for (int i = 0; i < 6; i++){
        printf("%d-", array[i]);
    }

    printf("\n");
    insertar(array, 5 , 4);

    
    for (int i = 0; i < 6; i++){
        printf("%d-", array[i]);
    }

    return 0;
}
