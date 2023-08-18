#include <stdio.h>

bool esPalindrome(char palabra[], int comienzoPalabra, int finalPalabra){
    if(comienzoPalabra>=finalPalabra){
        return true;
    }else if(palabra[comienzoPalabra]!=palabra[finalPalabra]){  
        return false;
    }else{
        return esPalindrome(palabra, comienzoPalabra+1, finalPalabra-1);
    }
}

int main(int argc, char const *argv[]){
    char string[] = "AFA";

    printf("%d", esPalindrome(string, 0, 2));
    return 0;
}
    

