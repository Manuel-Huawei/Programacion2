#include <stdio.h>

// Función de búsqueda binaria
int busquedaBinaria(int arr[], int inicio, int fin, int objetivo) {
    while (inicio <= fin) {
        int medio = (inicio + fin) / 2;

        // Si el objetivo está en el medio
        if (arr[medio] == objetivo) {
            return medio;
        }
        
        // Si el objetivo es menor, buscar en la mitad izquierda
        if (arr[medio] > objetivo) {
            fin = medio - 1;
        }
        
        // Si el objetivo es mayor, buscar en la mitad derecha
        else {
            inicio = medio + 1;
        }
    }
    
    // El objetivo no está en el array
    return -1;
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 45, 56, 72, 91};
    int tam = sizeof(arr) / sizeof(arr[0]);
    int objetivo = 23;
    
    int resultado = busquedaBinaria(arr, 0, tam - 1, objetivo);
    
    if (resultado != -1) {
        printf("El elemento %d fue encontrado en la posición %d.\n", objetivo, resultado);
    } else {
        printf("El elemento %d no fue encontrado en el array.\n", objetivo);
    }
    
    return 0;
}




