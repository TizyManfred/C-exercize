#include <stdio.h>

int main(void) {
  int nValori1, nValori2, nValoriRis, i, j, temp;

  printf("Inserisci il numero di valori che vuoi inserire nel primo array: ");
  scanf("%d", &nValori1);

  printf("Inserisci il numero di valori che vuoi inserire nel secondo array: ");
  scanf("%d", &nValori2);
  
  int memoria1[nValori1];
  int memoria2[nValori2];

  //input array 1
  printf("Inserimento array 1\n");
  for (i=0; i<nValori1; i++){
    printf("Inserici il numero: ");
    scanf("%d", &temp);
    memoria1[i] = temp;
  }

  //input array 2
  printf("Inserimento array 2\n");
  for (i=0; i<nValori2; i++){
    printf("Inserici il numero: ");
    scanf("%d", &temp);
    memoria2[i] = temp;
  }

  //vettore risultante
  nValoriRis = nValori1 + nValori2;
  int memoriaRis[nValoriRis];

  j = 0;
  
  //concatena array
  for(i=0;i<nValoriRis;i++){
    if(i < nValori1){
      memoriaRis[i] = memoria1[i];
    } else {
      memoriaRis[i] = memoria2[j];
      j = j + 1;
    }
  }

  //bubble sort
  for (i = 0; i < nValoriRis - 1; i++){
      for (j = 0; j < nValoriRis - i - 1; j++) {
          if (memoriaRis[j] > memoriaRis[j + 1]) {
              temp = memoriaRis[j];
              memoriaRis[j] = memoriaRis[j + 1];
              memoriaRis[j + 1] = temp;
          }
      }
  }

  //output array risultante
  for (i=0; i<nValoriRis; i++){
    printf("%d   ", memoriaRis[i]);
  }

  return 0;
}
