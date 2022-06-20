#include <stdio.h>
#include "fila.h"

int main(void){

    tp_fila fila;
    inicializa_fila (&fila);

    tp_item e;
    int i;

    for(i=0;i<=300;i++)
        insere_fila(&fila, i);

    imprime_fila(fila);

    for(i=0;i<30;i++)
        remove_fila(&fila, &e);

    imprime_fila(fila);

}   