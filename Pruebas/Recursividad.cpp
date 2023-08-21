#include <stdio.h>

int sumaRecursiva(int n)
{
    if (n == 1)
    {
        return n;
    }
    return n + sumaRecursiva(n - 1);
}

int factorial(int n)
{
    if (n == 1)
    {
        return n;
    }

    return n * factorial(n - 1);
}

void mostrarArrayRecursivo(int array[], int indice, int largoArray)
{
    if (indice == largoArray - 1)
    {
        printf("%d", array[indice]);
    }
    else
    {
        printf("%d\n", array[indice]);
        mostrarArrayRecursivo(array, indice + 1, largoArray);
    }
}

int posicionElementoRecursivo(int array[], int elementoBuscar, int indice, int largoArray)
{
    int posicion = 0;

    if (indice == largoArray)
    {
        return -1;
    }
    else if (array[indice] == elementoBuscar)
    {
        return indice;
    }
    else
    {
        return posicionElementoRecursivo(array, elementoBuscar, indice + 1, largoArray);
    }
}

int main(int argc, char const *argv[])
{
    int array[] = {1, 6, 2, 8, 2, 6};
    // printf("%d", sumaRecursiva(6));
    // printf("%d", factorial(6));
    // mostrarArrayRecursivo(array, 0, 6);
    printf("%d", posicionElementoRecursivo(array, 82, 0, 6));
    return 0;
}
