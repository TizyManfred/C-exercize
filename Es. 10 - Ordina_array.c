#include <stdio.h>

int main(void) {
  int nValori, i, j, temp;

  printf("Inserisci il numero di valori che vuoi inserire: ");
  scanf("%d", &nValori); 
  
  int memoria[nValori];

  //input
  for (i=0; i<nValori; i++){
    printf("Inserici il numero: ");
    scanf("%d", &temp);
    memoria[i] = temp;
  }

  //bubble sort
  for (i = 0; i < nValori - 1; i++){
      for (j = 0; j < nValori - i - 1; j++) {
          if (memoria[j] > memoria[j + 1]) {
              temp = memoria[j];
              memoria[j] = memoria[j + 1];
              memoria[j + 1] = temp;
          }
      }
  }

  //output
  for (i=0; i<nValori; i++){
    printf("%d   ", memoria[i]);
  }

  return 0;
}
