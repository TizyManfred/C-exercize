#include <stdio.h>

int main(void) {
  int i, pos;
  printf("Inserisci il numero dei valori che vuoi inserire: ");
    scanf("%d", &pos);
  
  //definisco un array 
  int array[pos];
  
  //creo il puntatore
  int *puntatore;

  for(i = 0; i < pos; i++){
    printf("Inserisci il %d° valore: ", (i+1));
    scanf("%d", &array[i]);
  }
  
  puntatore = &array[0];
  
  for(i = 0; i < pos; i++){
    if(*(puntatore+i)%2 == 0){
      printf("Numero pari --> %d\n", *(puntatore+i));
    }
  }
  return 0;
}
