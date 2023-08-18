#include <stdio.h>
typedef unsigned int uint;

/* Devuelve el producto de factorial (n) por 'acum '. */
uint factAcum (uint n , int acum ){
    if(n==0){
        acum = 1;
    }else{
        acum = n * factAcum(n-1, acum);
    }

    return acum;
}

int main(int argc, char const *argv[]){
    printf("%d", factAcum(3,1));

    return 0;
}
