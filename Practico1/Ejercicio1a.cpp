#include <stdio.h>

// Registro con dia d, mes m y año a
struct rep_fecha {
    unsigned int d ;
    unsigned int m ;
    unsigned int a ;
};

void ordenarFechas(rep_fecha arregloFechas[], int largoArreglo){
    for (int i = 0; i < largoArreglo; i++){
        for (int j = 0; j < largoArreglo - i - 1; j++){
           if((arregloFechas[j].a > arregloFechas[j+1].a) || ((arregloFechas[j].a == arregloFechas[j+1].a) && (arregloFechas[j].m > arregloFechas[j+1].m)) || ((arregloFechas[j].a == arregloFechas[j+1].a) && (arregloFechas[j].m == arregloFechas[j+1].m) && arregloFechas[j].d>arregloFechas[j+1].d)){
               rep_fecha fechaAuxiliar = arregloFechas[j];
               arregloFechas[j] = arregloFechas[j + 1];
               arregloFechas[j + 1] = fechaAuxiliar;
           } 
        }
    }
}

int main(int argc, char const *argv[]){
    rep_fecha arregloFechas[5];

    for (int i = 0; i < 5; i++){
        printf("Ingrese la fecha %d:", i + 1);
        scanf("%d/%d/%d", &arregloFechas[i].d, &arregloFechas[i].m, &arregloFechas[i].a);
    }

    ordenarFechas(arregloFechas, 5);

    printf("Mostrando las fechas ordenadas: \n");
    for (int i = 0; i < 5; i++){
        printf("Fecha %d: %d/%d/%d \n", i+1 ,arregloFechas[i].d, arregloFechas[i].m, arregloFechas[i].a);
    }

    return 0;
}
