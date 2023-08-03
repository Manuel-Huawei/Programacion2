#include <stdio.h>

//Usamos un parametro por referencia para cambiar el valor
void changeValue(int *number){
    *number=200;
}

int main(){
   //int numberMain=23;
   //printf("%d", numberMain);
   //changeValue(&numberMain);
   //printf("%d", numberMain);

   int x = 5;
   int *pX = &x;
   printf("%d\n", *pX);
   *pX=10;
   printf("%d\n", *pX);
   int **qpX = &pX;
   **qpX=16;
   printf("%d\n", **qpX);
   return 0;
}
