#include <stdio.h>

int main(void) {
  int i;
  char str[8] = "Tiziano";
  char str1[8] = "Martina";

  char *puntatore;
  char *puntatore1;

  puntatore = &str;
  puntatore1 = &str1;

  //scambio 3 caratteri centrali
  *(puntatore1+2) = *(puntatore+2);
  *(puntatore1+3) = *(puntatore+3);
  *(puntatore1+4) = *(puntatore+4);
  
  
  for(i = 0; i < 7; i++){
    printf("Valore --> %c\n", *(puntatore1+i));
  }
  return 0;
}
