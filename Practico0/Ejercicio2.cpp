#include<stdio.h>

int main(){
    int i,A,B,count=0, j;
    printf("Digite A:");
    scanf("%d", &A);
    printf("Digite B:");
    scanf("%d", &B);   

    for(i=A; i<=B; i++){
        for(j=2; j<i; j++){
           if(i%j==0){
               count++;
               break;
           }
        }

        if(count==0 && i!=1)
            printf("%d\n", i);
        count = 0;
    }
    return 0;
}