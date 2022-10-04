#include <stdio.h>

int maxFun(int arr[10]){
  int i = 0;
  int maggiore = arr[i];
  
  for(i = 1; i < 10; i++){
    
    if(arr[i] > maggiore){
      maggiore = arr[i];
    }
  }
  return maggiore;
}

int minFun(int arr[10]){
  int i = 0;
  int minore = arr[i];
  
  for(i = 1; i < 10; i++){
    
    if(arr[i] < minore){
      minore = arr[i];
    }
  }
  return minore;
}


int medFun(int arr[10]){
  int i = 0;
  int somma = 0;
  
  for(i = 0; i < 10; i++){
      somma = somma + arr[i];
  }
  return somma/10;
}


void trova(int arr[10], int* max, int* min, int*med){
  int massimo = maxFun(arr);
  int minimo = minFun(arr);
  int media = medFun(arr);

  *max = massimo;
  *min = minimo;
  *med = media;
}

int main(void) {
  //definisco un array 
  int array[10], i;

  //creo il puntatore
  int *max;
  int *min;
  int *med;

  for(i = 0; i < 10; i++){
    printf("Inserisci il %d° valore: ", (i+1));
    scanf("%d", &array[i]);
  }

  int massimo;
  int minimo;
  int media;

  max = &massimo;
  min = &minimo;
  med = &media;

  printf("Max --> %p\n", max);
  printf("Min --> %p\n", min);
  printf("Med --> %p\n", med);
  
  trova(array, &*max, &*min, &*med);

  printf("Max --> %d\n", *max);
  printf("Min --> %d\n", *min);
  printf("Med --> %d\n", *med);
  
  
  return 0;
}
