#include <stdio.h>
#include <stdlib.h>

#include "ordered_array.h"

/*
Realizzare la struttura dati Array Ordinato che mantiene un array ordinato di elementi.
Gli elementi di ogni array hanno tutti lo stesso tipo, ma la struttura dati deve essere generica (il
tipo e il numero massimo di elementi non possono essere assunti come noti a priori).
L’implementazione deve permettere di specificare il criterio secondo cui ordinare gli elementi.
La struttura dati deve offrire metodi/funzioni per:
_ Creare un array ordinato inizialmente vuoto
_ Testare se l’array è vuoto
_ Recuperare la dimensione dell’array
_ Aggiungere un elemento all’array
_ Recuperare l’elemento dell’array in posizione i
*/

struct _OrderedArray {
  // si riferisce ad una struttura con puntatore
  void **array;
  unsigned long el_num;
  unsigned long array_capacity;
  int (*precedes)(void *, void *);  // restituisce true se primo arg. < secondo arg.
};

OrderedArray *ordered_array_create(int (*precedes)(void *, void *)) {
  if (precedes == NULL) {
    printf("Error: precedes is NULL\n");
    exit(EXIT_FAILURE);
  }
  OrderedArray *ordered_array = (OrderedArray *)malloc(sizeof(OrderedArray));

  if (ordered_array == NULL) {
    printf("Error: ordered_array is null\n");
    exit(EXIT_FAILURE);
  }

  ordered_array->array = NULL;
  ordered_array->el_num = 0;
  ordered_array->array_capacity = 2;  // definisco la capacità iniziale dell'array

  return ordered_array;
}

int ordered_array_is_empty(OrderedArray *ordered_array) {
  if (ordered_array == NULL) {
    printf("Error: ordered_array is NULL\n");
    exit(EXIT_FAILURE);
  }

  return ordered_array->el_num == 0;
}

int main() {
    // codice del tuo programma
    return 0;
}