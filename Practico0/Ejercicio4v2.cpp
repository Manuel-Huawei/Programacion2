#include <stdio.h>
#include <string.h>
#include <ctype.h>

bool esPalindrome(char *frase){
    int largoFrase=strlen(frase);

    for (int i = 0; i < largoFrase; i++){
        if(frase[i]!=frase[largoFrase - i - 1]){
            return false;
        }
    }

    return true;
}

int main(){
    char *frase;

    frase = new char;

    printf("Ingresa la frase: ");

    scanf("%[^\n]s", frase);

    if (esPalindrome(frase)){
        printf("La palabra: %s Si ES palindromo ", frase);
    }
    else{
        printf("La palabra: %s NO es palindromo ", frase);
    }

    return 0;
}
