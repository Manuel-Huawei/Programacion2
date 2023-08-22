#include <stdio.h>

// Este algoritmo utiliza recursion de cola.
int mcd(int numero1, int numero2)
{
    int res;

    if (numero1 == numero2) {
        res = numero1;
    } else if (numero1 > numero2) {
        res = mcd(numero1 - numero2, numero2);
    } else {
        res = mcd(numero1, numero2 - numero1);
    }

    return res;
}

int main(int argc, char const* argv[])
{
    printf("%d", mcd(6, 3));
    return 0;
}
