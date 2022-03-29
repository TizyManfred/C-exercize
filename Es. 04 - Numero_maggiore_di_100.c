#include <stdio.h>

int main(void) {
  int numero;
  printf("Inserisci il numero: ");
  scanf("%d", &numero);

  if (numero > 100){
    printf("Il numero è maggiore di 100\n");
  } else if(numero < 100){
    printf("Il numero è minore di 100\n");
  } else {
    printf("Il numero è 100\n");
  }
  return 0;
}
