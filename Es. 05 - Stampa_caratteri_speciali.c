#include <stdio.h>

int main(void) {
  int numero;
  printf("Inserisci il numero: ");
  scanf("%d", &numero);

  if (numero < 0){
    printf("\\\\\\\\\\\\\\\n");
  } else if(numero > 0){
    printf("\"\"\"\"\"\"\n");
  } else {
    printf("%%%%%%%%%%%%%%\n");
  }
  return 0;
}
