#include <stdio.h>

int main(void) {
  //definisco un array 
  int array[10], i, pos;

  //creo il puntatore
  int *puntatore;

  for(i = 0; i < 10; i++){
    printf("Inserisci il %d° valore: ", (i+1));
    scanf("%d", &array[i]);
  }
  
  pos = 0;
  int min = array[pos];
  
  for(i = 1; i < 10; i++){
    
    if(array[i] < min){
      min = array[i];
      pos = i;
    }
  }
  
  //puntatore all'indirizzo di array[pos]
  puntatore = &array[pos];
  printf("Indrizzo --> %p\n", puntatore);

  //assegno il valore minimo al puntatore
  *puntatore = min;
  printf("Valore --> %d\n", *puntatore);

  return 0;
}
