#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i, pos, pos1, swap, d, n, c;
  printf("Inserisci il numero dei valori che vuoi inserire nel primo array: ");
    scanf("%d", &pos);
  
  int array[pos];

  //inserimento valori
  for(i = 0; i < pos; i++){
    printf("Inserisci il %d° valore: ", (i+1));
    scanf("%d", array+i);
  }

  
  printf("Inserisci il numero dei valori che vuoi inserire nel secondo array: ");
    scanf("%d", &pos1);

  int array1[pos1];
  
  for(i = 0; i < pos1; i++){
    printf("Inserisci il %d° valore: ", (i+1));
    scanf("%d", array1+i);
  }

  int arrayFinale[pos+pos1];
  for(i = 0; i < pos; i++){
    arrayFinale[i] = *(array+i);
  }
  for(i = 0; i < (pos+pos1); i++){
    arrayFinale[i+pos] = *(array1+i);
  }
  

  for (c = 0 ; c < n - 1; c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (array[d] > array[d+1]){
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }


  //stampa array utilizzando i puntatori
  for(i = 0; i < (pos+pos1); i++){
    printf("%d° valore --> %d\n",i+1, *(arrayFinale+i));
  }
  return 0;
}
