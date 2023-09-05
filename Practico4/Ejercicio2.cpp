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

lista listaNPrimeros(lista l, int N)
{
    lista resultado, nuevo;
    int contador = 0;
    if (l == NULL)
        resultado = NULL;
    else {
        lista ultimo = NULL; // inserciones al final de res
        while (contador <= N || l != NULL) {
            nuevo = new nodo;
            nuevo->elem = l->elem;
            nuevo->sig = NULL;
            if (ultimo == NULL) {
                resultado = ultimo = nuevo;
            } else {
                ultimo->sig = nuevo;
                ultimo = nuevo;
            }
            contador++;
            l = l->sig;
        }
    }
    return resultado;
}

void concatenar(lista& l1, lista l2)
{
    if (l1 == NULL) {
        l1 == l2;
    } else {
        lista iter = l1;
        while (iter->sig != NULL) {
            iter = iter->sig;
        }
        iter->sig = l2;
    }
}

int main(int argc, char const* argv[])
{
    lista NuevaLista = new nodo;
    lista NuevaLista2 = new nodo;
    lista NuevaLista3 = new nodo;
    lista NuevaLista4 = new nodo;

    lista NuevaListav2 = new nodo;
    lista NuevaLista2v2 = new nodo;
    lista NuevaLista3v2 = new nodo;
    lista NuevaLista4v2 = new nodo;

    NuevaLista->elem = 10;
    NuevaLista->sig = NuevaLista2;
    NuevaLista2->elem = 20;
    NuevaLista2->sig = NuevaLista3;
    NuevaLista3->elem = 30;
    NuevaLista3->sig = NuevaLista4;
    NuevaLista4->elem = 40;
    NuevaLista4->sig = NULL;

    NuevaListav2->elem = 50;
    NuevaListav2->sig = NuevaLista2v2;
    NuevaLista2v2->elem = 60;
    NuevaLista2v2->sig = NuevaLista3v2;
    NuevaLista3v2->elem = 70;
    NuevaLista3v2->sig = NuevaLista4v2;
    NuevaLista4v2->elem = 80;
    NuevaLista4v2->sig = NULL;

    imprimirLista(NuevaLista);
    printf("///////////////\n");
    imprimirLista(NuevaListav2);
    printf("///////////////\n");
    concatenar(NuevaLista, NuevaListav2);
    imprimirLista(NuevaLista);
    printf("///////////////\n");
    imprimirLista(NuevaListav2);
    return 0;
}
