#include <stdio.h>

int main(void) {
  int nValori, i, temp, pari, dispari;

  printf("Inserisci il numero di valori che vuoi inserire: ");
  scanf("%d", &nValori); 
  
  int memoria[nValori];

  //input
  for (i=0; i<nValori; i++){
    printf("Inserici il numero: ");
    scanf("%d", &temp);
    memoria[i] = temp;
  }

  pari = 0;
  dispari = 0;
  
  for(i=0; i<nValori; i++){
    if(memoria[i]%2 == 0){
      pari = pari + 1;
    } else {
      dispari = dispari + 1;
    }
  }

  printf("Ci sono %d numeri pari e %d numeri dispari",pari, dispari);
  return 0;
}
