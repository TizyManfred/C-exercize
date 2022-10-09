#include <stdio.h>

int main(void) {
  int i, pos, j;
  printf("Inserisci il numero dei valori che vuoi inserire: ");
    scanf("%d", &pos);
  
  //definisco un array 
  int array[pos];

  //creo il puntatore
  int *puntatore;
  int *puntatore2;

  //inserimento valori
  for(i = 0; i < pos; i++){
    printf("Inserisci il %d° valore: ", (i+1));
    scanf("%d", &array[i]);
  }

  //riordina array
  for (i = 0; i < pos - 1; i++){
    
    for (j = 0; j < pos - i - 1; j++) {
      puntatore2 = &array[j];
      if (*puntatore2 > *(puntatore2 + 1)) {
        int tmp = *puntatore2;
        *puntatore2 = *(puntatore2 + 1);
        *(puntatore2 + 1) = tmp;
      }
    }
  }
  
  //stampa array utilizzando i puntatori
  puntatore = &array[0];
  for(i = 0; i < pos; i++){
    printf("Valore --> %d\n", *(puntatore+i));
  }
  return 0;
}
