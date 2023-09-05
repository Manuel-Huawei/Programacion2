#include <stdio.h>

struct nodo_doble {
    int elem;
    nodo_doble* ant;
    nodo_doble* sig;
};

typedef nodo_doble* lista;

void imprimirLista(lista l)
{
    while (l != NULL) {
        printf("Elemento: %d\n", l->elem);
        l = l->sig;
    }
}

// Retorna una lista vacia.
lista listaVacia()
{
    lista listaVacia = NULL;
    return listaVacia;
}

// Dada una lista l, verifica si l esta vacia
bool isEmpty(lista l)
{
    return (l == NULL);
}

// Dados un entero x y una lista l, retorna el resultado de insertar x al principio de l
void insPrincipio(lista& l, int x)
{
    lista NodoInsertar = new nodo_doble;
    NodoInsertar->elem = x;
    NodoInsertar->sig = l;
    NodoInsertar->ant = NULL;
    l->ant = NodoInsertar;
    l = NodoInsertar;
}

// Dados un entero x y una lista l, verifica si x pertenece a l
bool esElemento(int x, lista l)
{
    while (l != NULL && l->elem != x) {
        l = l->sig;
    }
    return l == NULL;
}

void removerTodos(int x, lista& l)
{
    lista lpos, lborrar = l;

    while (lpos != NULL) {
        if (lpos->elem == x) {
            lborrar = lpos;

            if (lpos->ant != NULL) {
                lpos->ant->sig = lpos->sig;
            } else {
                l = lpos->sig;
            }

            if (lpos->sig != NULL) {
                lpos->sig->ant = lpos->ant;
            }

            lpos = lpos->sig;
            delete lborrar;
        } else {
            lpos = lpos->sig;
        }
    }
}

int main(int argc, char const* argv[])
{
    lista NuevaLista = new nodo_doble;
    lista NuevaLista2 = new nodo_doble;
    lista NuevaLista3 = new nodo_doble;
    lista NuevaLista4 = new nodo_doble;

    NuevaLista->elem = 10;
    NuevaLista->ant = NULL;
    NuevaLista->sig = NuevaLista2;

    NuevaLista2->elem = 20;
    NuevaLista2->ant = NuevaLista;
    NuevaLista2->sig = NuevaLista3;

    NuevaLista3->elem = 20;
    NuevaLista3->ant = NuevaLista2;
    NuevaLista3->sig = NuevaLista4;

    NuevaLista4->elem = 40;
    NuevaLista4->ant = NuevaLista3;
    NuevaLista4->sig = NULL;

    // imprimirLista(NuevaLista);
    // printf("-------------\n");
    // insPrincipio(NuevaLista, 65);
    // printf("-------------\n");
    // imprimirLista(NuevaLista);

    // printf("%d", esElemento(41, NuevaLista));
    removerTodos(20, NuevaLista);
    imprimirLista(NuevaLista);

    return 0;
}
