#include <stdio.h>
#include <stdbool.h>

//protocollo
float media (int arr[]);

int main(void) {
  int vettore[10]={1,2,3,4,5,6,7,8,9,10};
  float med;
  med = media(vettore);
  printf("La media è %f \n", med);
  
  return 0;
}

float media(int arr[10]){
  int i;
  int somma = 0;
  float media;
  for (i=0; i<10; i++){
    somma +=arr[i];
  }
  media = somma/10;
  return media;
}
