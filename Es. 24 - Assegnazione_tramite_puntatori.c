#include <stdio.h>

int main(void) {
  int num;
  float numero;
  char carattere;

  int *puntatoreInt;
  float *puntatoreFloat;
  char *puntatoreChar;

  puntatoreInt = &num;
  puntatoreFloat = &numero;
  puntatoreChar = &carattere;
  
  *puntatoreInt = 30;
  *puntatoreFloat = 75.3;
  *puntatoreChar = '?';
  
  num = *puntatoreInt;
  numero = *puntatoreFloat;
  carattere = *puntatoreChar;

  printf("Numero intero: %d \n", num);
  printf("Numero float: %f \n", numero);
  printf("Carattere: %c", carattere);
  return 0;
}
