#include <stdio.h>

typedef unsigned int uint;

/* Ordena A[1.. n] de manera creciente. */
void ordenar(int *A, uint n)
{
    if (n > 1)
    {
        ordenar(A, n - 1);
        insertarOrdenado(A, n - 1, A[n]);
    }
}

void insertarOrdenado(int *A, uint n, int e)
{
    if (n == 0 || e >= A[n])
    {
        A[n + 1] = e;
    }
    else
    {
    }
}

int main(int argc, char const *argv[])
{
    int array[] = {3, 6, 21, 6, 1};
    for (int i = 0; i < 5; i++)
    {
        printf("%d", array[i]);
    }

    printf("\n");
    ordenar(array, 5);

    for (int i = 0; i < 5; i++)
    {
        printf("%d", array[i]);
    }

    return 0;
}
