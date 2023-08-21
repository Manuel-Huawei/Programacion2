#include <stdio.h>

typedef unsigned int uint;

/* Inserta e en A [1..n+1] de manera ordenada.
Precondición: n >=0. Si n >=1 = > A [1.. n] est á ordenado de manera
creciente. A[n+1] es indeterminado.
Postcondición: A [1..n +1] queda ordenado de manera creciente.

Recursion de cola: La llamada recursiva es la ultima instruccion que se ejecuta.*/

void insertarOrdenado(int *A, uint n, int e)
{
    if (n == 0 || e >= A[n])
    {
        A[n + 1] = e;
    }
    else
    {
        A[n + 1] = A[n];
        insertarOrdenado(A, n - 1, e);
    }
}

// Version iterativa de insertarOrdenado
void insertarOrdenadoV2(int *A, uint n, int e)
{
    while (n == 0 || e >= A[n])
    {
        A[n + 1] = A[n];
        n--;
    }
    A[n + 1] = e;
}

/* Ordena A[1.. n] de manera creciente. */
void ordenar(int *A, uint n)
{
    if (n > 1)
    {
        ordenar(A, n - 1);
        insertarOrdenado(A, n - 1, A[n]);
    }
}

int main(int argc, char const *argv[])
{
    int array[] = {0, 7, 8, 6, 1};
    for (int i = 0; i < 5; i++)
    {
        printf("%d", array[i]);
    }

    printf("\n");
    ordenar(array, 4);

    for (int i = 0; i < 5; i++)
    {
        printf("%d", array[i]);
    }

    return 0;
}
