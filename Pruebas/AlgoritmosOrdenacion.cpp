#include <stdio.h>


//Insertion Sort
void insertionSort(int arr[], int length) { 
   for (int i = 1; i < length; i++){
    int temp = arr[i];
    int leftValue = i - 1;

    while(leftValue>=0 && arr[leftValue]>temp){
        arr[leftValue+1]=arr[leftValue];
        leftValue--;
    }
    arr[leftValue+1]=temp;
   }
}

void bubbleSort(int arr[], int length) { 
   for (int i = 0; i < length - 1; i++){
    for (int j = 0; i < length - i - 1; j++){
        if(arr[j]>arr[j+1]){
            int temp = arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
   }
}

int main(int argc, char const *argv[]){
  int array[]={8,4,2,7,3,1};
  insertionSort(array, 6);
  for(int i = 0; i < 6; i++){
    printf("%d",array[i]);
  }
}
