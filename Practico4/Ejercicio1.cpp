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

lista ultimoElemento(lista l)
{
    while (l->sig != NULL) {
        l = l->sig;
    }
    return l;
}

int promedioLista(lista l)
{
    int promedio = 0;
    int cantidadNodos = 0;

    // Recorremos la lista para obtener el promedio
    while (l != NULL) {
        promedio += l->elem;
        cantidadNodos += 1;
        l = l->sig;
    }

    promedio = promedio / cantidadNodos;
    return promedio;
}

// Precondicion: La lista ya esta ordenada y posee al menos un elemento
void insertarOrdenado(lista l, lista nuevoElemento)
{
    while (l->sig->elem < nuevoElemento->elem) {
        l = l->sig;
    }

    nuevoElemento->sig = l->sig;
    l->sig = nuevoElemento;
}

// Precondicion: Tener al menos un elemento dentro de la lista
void insertarUltimo(lista l, lista nuevoElemento)
{
    while (l->sig != NULL) {
        l = l->sig;
    }
    l->sig = nuevoElemento;
}

void removerTodos(lista l, int elemento)
{
    lista listaAux1, listaAux2;
    while (l != NULL) {
        listaAux1, listaAux2 = l;
        if (l->elem == elemento) {
            listaAux1, listaAux2 = l->sig;
            delete l;
        } else {
            l = l->sig;
        }
    }
}

int main(int argc, char const* argv[])
{
    lista NuevaLista = new nodo;
    lista NuevaLista2 = new nodo;
    lista NuevaLista3 = new nodo;
    lista UltimoElemento = new nodo;
    lista elementoOrdenado = new nodo;

    NuevaLista->elem = 10;
    NuevaLista->sig = NuevaLista2;
    NuevaLista2->elem = 20;
    NuevaLista2->sig = NuevaLista3;
    NuevaLista3->elem = 30;
    NuevaLista3->sig = NULL;

    UltimoElemento->elem = 111;
    UltimoElemento->sig = NULL;

    elementoOrdenado->elem = 25;

    insertarOrdenado(NuevaLista, elementoOrdenado);
    insertarUltimo(NuevaLista, UltimoElemento);
    printf("El ultimo elemento de la lista es: %d\n", ultimoElemento(NuevaLista)->elem);
    printf("El promedio de la lista es: %d\n", promedioLista(NuevaLista));
    removerTodos(NuevaLista, 20);
    imprimirLista(NuevaLista);

    return 0;
}
