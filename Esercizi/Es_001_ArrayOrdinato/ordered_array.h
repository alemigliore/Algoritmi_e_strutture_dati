typedef struct _OrderedArray OrderedArray;

// crea un ordered array vuoto e ne restituisce l' indirizzo, NULL in caso di errore
OrderedArray *ordered_array_create(int (*precedes)(void *, void *));

// restituisce true se l'array è vuoto, false altrimenti
int ordered_array_is_empty(OrderedArray *ordered_array);