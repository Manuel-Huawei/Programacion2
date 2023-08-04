#include <stdio.h>

int largoDeCadena(char *frase)
{
    int largo = 0;
    char *cptr = &frase[largo];

    while (*cptr != false)
    {
        largo = largo + 1;
        cptr = &frase[largo];
    }

    return largo;
}

bool esPalindrome(char *frase)
{
    int largo = largoDeCadena(frase);
    int posicion = 0;
    bool verifica_que_sea_palindromo = true;

    while (verifica_que_sea_palindromo && (posicion <= (largo - 1 - posicion)))
    {
        printf("%c : %c\n", frase[posicion], frase[(largo - 1 - posicion)]);
        if (frase[posicion] != frase[(largo - 1 - posicion)])
        {
            verifica_que_sea_palindromo = false;
        }

        posicion++;
    }

    return verifica_que_sea_palindromo;
}

int main()
{
    char *frase;

    frase = new char;

    printf("Ingresa la frase: ");

    scanf("%[^\n]s", frase);

    bool validation = esPalindrome(frase);

    if (validation)
    {
        printf("La palabra: %s Si ES palindromo ", frase);
    }
    else
    {
        printf("La palabra: %s NO es palindromo ", frase);
    }

    return 0;
}
