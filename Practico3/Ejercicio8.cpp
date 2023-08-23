#include <stdio.h>

int combinaciones(int m, int n)
{
    if (m == n || n == 0) {
        return 1;
    } else if (n == 1) {
        return m;
    } else {
        return combinaciones(m - 1, n) + combinaciones(m - 1, n - 1);
    }
}

int main(int argc, char const* argv[])
{
    printf("%d", combinaciones(5, 3));
    return 0;
}
