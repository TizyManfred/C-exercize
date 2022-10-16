#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void Inserisci (int* array, int *lunghezza, int valore){
  *(array+(*lunghezza)) = valore;
  *lunghezza = *lunghezza + 1;
}


int main(void) {
  int valore;
  int lungh = 0;
  int len = 10;

  
  int *array;
  
  /*allochiamo un array di 10 interi*/
	array = malloc(len*sizeof(int));
  
  bool continua = true;
  
  int *puntatore;
  int *lunghezza;

  puntatore = &array[0];
  lunghezza = &lungh;

        if(*lunghezza < len){
          printf("Inserisci il %d° valore: ",(*lunghezza+1));
          scanf("%d",&valore);
          Inserisci(puntatore, lunghezza, valore);
        } else {
          len = len + 10;
          array = realloc(array, len*sizeof(int));
          puntatore = &array[0];
        }
 
  return 0;
}

