#include <stdio.h>

//Sin resolver
bool F ( int *A , int *B , int n){
    bool b=false;
    for (int i = 0; i < n; i++){
        for (int j = n-1; j > 1; j--){
            b = b || (A[i] < B[j]) ;
        }
    }
    return b;
}

int main(int argc, char const *argv[]){
    int array1[5]={1,2,3,5,6};
    int array2[5]={23,23,2,0,0};
    printf("%d", F(array1,array2,6));
    return 0;
}
