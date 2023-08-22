#include <stdio.h>

int sumaRecursiva(int n)
{
    if (n == 1) {
        return n;
    }
    return n + sumaRecursiva(n - 1);
}

int factorial(int n)
{
    if (n == 1) {
        return n;
    }

    return n * factorial(n - 1);
}

void mostrarArrayRecursivo(int array[], int indice, int largoArray)
{
    if (indice == largoArray - 1) {
        printf("%d", array[indice]);
    } else {
        printf("%d\n", array[indice]);
        mostrarArrayRecursivo(array, indice + 1, largoArray);
    }
}

int posicionElementoRecursivo(int array[], int elementoBuscar, int indice, int largoArray)
{
    int posicion = 0;

    if (indice == largoArray) {
        return -1;
    } else if (array[indice] == elementoBuscar) {
        return indice;
    } else {
        return posicionElementoRecursivo(
            array, elementoBuscar, indice + 1, largoArray);
    }
}

int potenciaRecursiva(int base, int exponente)
{
    if (exponente == 0) {
        return 1;
    } else if (exponente == 1) {
        return base;
    } else {
        return base * potenciaRecursiva(base, exponente - 1);
    }
}

int sumaDigitos(int numero)
{
    if (numero < 10) {
        return numero;
    } else {
        return (numero % 10) + sumaDigitos(numero / 10);
    }
}

int arraysIguales(int array1[], int array2[], int indice, int largoArray)
{
    if (indice == largoArray - 1) {
        return true;
    } else if (array1[indice] != array2[indice]) {
        return false;
    } else {
        return arraysIguales(array1, array2, indice + 1, largoArray);
    }
}

int sumaArray(int inicio, int fin, int array[])
{
    if (inicio == fin) {
        return array[inicio];
    } else {
        int mitad = (inicio + fin) / 2;
        int primeraParte = sumaArray(inicio, mitad, array);
        int segundaParte = sumaArray(mitad + 1, fin, array);

        return primeraParte + segundaParte;
    }
}

int main(int argc, char const* argv[])
{
    int array1[] = { 1, 6, 2, 8, 2, 6 };
    int array2[] = { 1, 6, 2, 8, 6 };
    char palabra[] = { 'A', 'D', 'B' };
    // printf("%d", sumaRecursiva(6));
    // printf("%d", factorial(6));
    // mostrarArrayRecursivo(array, 0, 6);
    // printf("%d", posicionElementoRecursivo(array, 82, 0, 6));
    // printf("%d", potenciaRecursiva(2, 5));
    // printf("%d", sumaDigitos(1243));
    printf("%d", sumaArray(0, 4, array2));

    return 0;
}
