#include <stdio.h>

int main(void) {
  int nStudenti, i, temp, max, min, somma;
  float media;
  nStudenti = 6;
  
  int memoria[nStudenti];

  //input
  for (i=0; i<nStudenti; i++){
    printf("Inserici il numero: ");
    scanf("%d", &temp);
    memoria[i] = temp;
  }

  //maggiore
  max = memoria[0];
  for (i=1; i<nStudenti; i++){
    if(memoria[i] > max){
      max = memoria[i];
    }
  }

  //minore
  min = memoria[0];
  for (i=1; i<nStudenti; i++){
    if(memoria[i] < min){
      min = memoria[i];
    }
  }

  //somma
  somma = 0;
  for (i=0; i<nStudenti; i++){
    somma = somma + memoria[i];
  }

  media = somma/nStudenti;
  
  printf("Il massimo è %d\nIl minimo è %d\nLa media è %f",max,min,media);
  return 0;
}
