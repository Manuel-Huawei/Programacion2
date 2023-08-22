#include <stdio.h>

int rayuela(int n)
{
    int res;
    if (n == 0 || n == 1) {
        return 1;
    } else {
        res = rayuela(n - 1) + rayuela(n - 2);
    }
    return res;
}

int main(int argc, char const* argv[])
{
    int caminos = rayuela(4);
    printf("La cantidad de caminos son %d", caminos);
    return 0;
}
