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

void imprimirLista(lista l)
{
    while (l != NULL) {
        printf("Elemento: %d\n", l->elem);
        l = l->sig;
    }
}

void sinNPrimeros(lista l, int N)
{
    int contador = 0;
    lista listaAux, copiaLista;
    copiaLista = l;

    while (contador <= N && copiaLista != NULL) {
        listaAux = copiaLista;
        copiaLista = copiaLista->sig;
        contador++;
        delete listaAux;
    }

    imprimirLista(listaAux);
}

int main(int argc, char const* argv[])
{
    lista NuevaLista = new nodo;
    lista NuevaLista2 = new nodo;
    lista NuevaLista3 = new nodo;
    lista NuevaLista4 = new nodo;

    NuevaLista->elem = 10;
    NuevaLista->sig = NuevaLista2;
    NuevaLista2->elem = 20;
    NuevaLista2->sig = NuevaLista3;
    NuevaLista3->elem = 30;
    NuevaLista3->sig = NuevaLista4;
    NuevaLista4->elem = 40;
    NuevaLista4->sig = NULL;

    imprimirLista(NuevaLista);
    sinNPrimeros(NuevaLista, 2);

    return 0;
}
