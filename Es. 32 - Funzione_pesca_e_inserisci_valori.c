#include <stdio.h>
#include <stdbool.h>

void Inserisci (int* array, int *lunghezza, int valore){
  *(array+(*lunghezza)) = valore;
  *lunghezza = *lunghezza + 1;
}

int pesca (int* array, int* lunghezza){
  int i = *lunghezza;
  int ultimoValore = *(array+i);

  return ultimoValore;
  //return *(array+(*lunghezza));
}

int main(void) {
  int array[100];
  int valore, scelta;
  int len = 0;
  int ultimoValore;

  bool continua = true;
  
  int *puntatore;
  int *lunghezza;
  
  puntatore = &array[0];
  lunghezza = &len;

  while(continua){
    do{
      printf("\nMenù\n---\n1. Inserisci un nuovo valore\n2. Restituisci ultimo valore\nInserisci la tua scelta: ");
      scanf("%d", &scelta);
      }while(scelta < 0 || scelta > 2);

    switch(scelta){
      case 1: {
        if(*lunghezza < 100){
          printf("Inserisci il %d° valore: ",(*lunghezza+1));
          scanf("%d",&valore);
          Inserisci(puntatore, lunghezza, valore);
        }
        break;
      }
      
      case 2: {
        ultimoValore = pesca(puntatore, lunghezza);
        printf("L'ultimo valore è: %d\n", ultimoValore);
        break;
      }
      
      case 0: {
        printf("Grazie e arrivederci\n");
        continua = false;
      }
    }
  }

  return 0;
}
