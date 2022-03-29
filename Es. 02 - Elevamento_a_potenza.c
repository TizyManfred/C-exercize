#include <stdio.h>
#include <math.h>

int main(void) {
  int base, esponente, risultato;
  printf("Inserisci la base: ");
  scanf("%d", &base);
  
  printf("Inserisci l'esponente: ");
  scanf("%d", &esponente);

  risultato = pow(base, esponente);
  printf("Il risultato è %d", risultato);
  
  return 0;
}
