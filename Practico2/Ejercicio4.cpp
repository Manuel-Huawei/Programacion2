#include <stdio.h>

int main(int argc, char const *argv[]){
    int array[] = {2,7,3,8,2,1,9};

    for (int i = 0; i < 7; i++){
        printf("%d-", array[i]);
    }

    printf("\n");

    for (int i = 1; i < 7; i++){
        int temp = array[i];
        int j = i-1;
        while (j>=0 && array[j]>temp){
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=temp;
    }

    for (int i = 0; i < 7; i++){
        printf("%d-", array[i]);
    }

    return 0;
}
