#include <stdio.h>

struct nodo {
    int elem;
    nodo* sig;
};

typedef nodo* lista;

void imprimirNPrimeros(lista l, int N)
{
    int contador = 0;
    while (contador != N && l != NULL) {
        printf("%d\n", l->elem);
        contador++;
        l = l->sig;
    }
}

int main(int argc, char const* argv[])
{
    lista NuevaLista = new nodo;
    lista NuevaLista2 = new nodo;
    lista NuevaLista3 = new nodo;

    NuevaLista->elem = 10;
    NuevaLista->sig = NuevaLista2;
    NuevaLista2->elem = 20;
    NuevaLista2->sig = NuevaLista3;
    NuevaLista3->elem = 30;
    NuevaLista3->sig = NULL;

    imprimirNPrimeros(NuevaLista, 0);
    return 0;
}
