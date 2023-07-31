#include <stdio.h>

int minimoValor(int array[], int largoArray){
    int valorMinimo=array[0];

    for(int i=0;i<largoArray;i++){
        if (array[i]<valorMinimo){
            valorMinimo=array[i];
        }
    }

    return valorMinimo;
}

int PromedioClase(){
    int notasClase[5];
    int promedioTotal=0;
    
    printf("Ingrese 5 calificaciones:");

    for(int i=0;i<5;i++){
        scanf("%d",&notasClase[i]);
        promedioTotal=promedioTotal+notasClase[i];
    }
    
    return (promedioTotal - minimoValor(notasClase, 5))/4;
}

int main(int argc, char const *argv[]){
    printf("%d", PromedioClase());
    return 0;
}