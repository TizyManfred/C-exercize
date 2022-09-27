#include <stdio.h>

int numMultipli (int N, int M){
  int numMultipli = 0;
  int num = M;
  int i = 1;
  
  while((num*i) <= N){
    numMultipli = numMultipli + 1;
    i = i + 1;
  }
  
  return numMultipli;
}

int main(void) {
  int N, M, numMul, i;
  
  printf("Inserisci il numero massimo: ");
  scanf("%d", &N);
  printf("Inserisci il numero da cercare i multipli: ");
  scanf("%d", &M);
  
  numMul = numMultipli(N,M);
  printf("Il numero dei multipli è: %d \n", numMul);

  if(numMul != 0){
    printf("I numeri sono: ");
    
    for(i = 1; i <= numMul; i++){
      printf("%d ", (M*i));
    }
  }
  return 0;
}
