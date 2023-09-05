#include <stdio.h>

struct nodo {
    int elem;
    nodo* sig;
};

typedef nodo* lista;

void imprimirLista(lista l)
{
    while (l != NULL) {
        printf("Elemento: %d\n", l->elem);
        l = l->sig;
    }
}

int main(int argc, char const* argv[])
{
    lista NuevaLista = new nodo;
    lista NuevaLista2 = new nodo;
    lista NuevaLista3 = new nodo;

    lista ListaAux = NuevaLista;

    NuevaLista->elem = 100;
    NuevaLista2->elem = 200;
    NuevaLista3->elem = 300;

    NuevaLista->sig = NuevaLista2;
    NuevaLista2->sig = NuevaLista3;
    NuevaLista3->sig = NULL;

    ListaAux = NuevaLista->sig;
    ListaAux->elem = 43;

    imprimirLista(NuevaLista);
    printf("Lista Aux: %d", ListaAux->elem);
    return 0;
}
