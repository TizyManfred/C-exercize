#include <stdio.h>

void Inserisci (int* array, int *lunghezza, int valore){
  *(array+(*lunghezza)) = valore;
  *lunghezza = *lunghezza + 1;
}

int main(void) {
  int array[100];
  int valore;
  int len = 0;
  
  int *puntatore;
  int *lunghezza;
  
  puntatore = &array[0];
  lunghezza = &len;

  while(*lunghezza < 100){
    printf("Inserisci il %d° valore: ",*lunghezza);
    scanf("%d",&valore);
    Inserisci(puntatore, lunghezza, valore);
    }

  return 0;
}
