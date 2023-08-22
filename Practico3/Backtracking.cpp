#include <stdio.h>

int path[4][4] = {
    0, 0, 0, 0,
    0, 0, 0, 0,
    0, 0, 0, 0,
    0, 0, 0, 0
};

int A[4][4] = {
    1, 1, 0, 0,
    0, 1, 0, 0,
    0, 1, 1, 0,
    0, 0, 1, 1
};

int findPath(int i, int j, int n)
{
    if (i == n - 1 && j == n - 1) {
        path[i][j] = 1;
        return 1;
    }

    if (A[i][j] == 1) {
        path[i][j] = 1;

        if (findPath(i, j + 1, n))
            return 1;

        if (findPath(i + 1, j, n))
            return 1;

        path[i][j] = 0;
    }

    return 0;
}

int main(int argc, char const* argv[])
{
    int n = 4;
    findPath(0, 0, n);

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (path[i][j]) {
                printf("(%d %d) --> ", i, j);
            }
        }
    }

    return 0;
}
