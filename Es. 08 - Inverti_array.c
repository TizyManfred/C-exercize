#include <stdio.h>

int main(void) {
  int nValori, i, x, temp;

  printf("Inserisci il numero di valori che vuoi inserire: ");
  scanf("%d", &nValori); 
  
  int memoria[nValori];

  //input
  for (i=0; i<nValori; i++){
    printf("Inserici il numero: ");
    scanf("%d", &temp);
    memoria[i] = temp;
  }

  //inverte
  i = 0;
  x = nValori - 1;
  
  while(i < (nValori/2)){
    temp = memoria[i];
    memoria[i] = memoria[x];
    memoria[x] = temp;

    i = i + 1;
    x = x - 1;
  }

  //output
  for (i=0; i<nValori; i++){
    printf("%d   ", memoria[i]);
  }

  
  return 0;
}
