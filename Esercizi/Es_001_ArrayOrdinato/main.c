#include <stdio.h>
#include <stdlib.h>

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

struct orderArray {
  // si riferisce ad una struttura con puntatore
  void** array;
  unsigned long el_num;
  unsigned long array_capacity;
  int (*precedes)(void*, void*);  // restituisce true se primo arg. < secondo arg.
};