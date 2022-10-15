#include <stdio.h>

int main(void) {
  int i, pos, x, y;
  printf("Inserisci il numero dei valori che vuoi inserire: ");
    scanf("%d", &pos);
  
  //definisco un array 
  int array[pos];
  int pari[pos];
  int dispari[pos];

  //inserimento valori
  for(i = 0; i < pos; i++){
    printf("Inserisci il %d° valore: ", (i+1));
    scanf("%d", array+i);
  }

  //separa valori
  x = 0;
  y = 0;
  for(i = 0; i < pos; i++){
    if(*(array+i) % 2 == 0){
      pari[x] = *(array+i);
      x = x + 1;
    } else {
      dispari[y] = *(array+i);
      y = y + 1;
    }
  }

  for(i = 0; i < (x+1); i++){
    array[i] = *(pari+i);
  }
  for(i = 0; i < (y+1); i++){
    array[i+x] = *(dispari+i);
  }
  
  //stampa array utilizzando i puntatori
  for(i = 0; i < pos; i++){
    printf("%d° valore --> %d\n",i+1, *(array+i));
  }
  return 0;
}
