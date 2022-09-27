#include <stdio.h>

int potenza(int base, int esponente){
  int risultato = base;
  int i;
  for(i=1; i < esponente; i++){
    risultato = risultato*base;
  }
  return risultato;
}

int main(void) {
  int base, esponente, risultato;
  printf("Inserisci la base: ");
  scanf("%d", &base);
  printf("Inserisci l'esponente: ");
  scanf("%d", &esponente);
  risultato = potenza(base, esponente);
  printf("Il risultato è: %d", risultato);
  return 0;
}
