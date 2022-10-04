#include <stdio.h>

int main(void) {
  int num1 = 4;
  int num2 = 7;

  //dichiaro i puntatori
  int *puntatore1;
  int *puntatore2;

  //assegno ai puntatori gli indirizzi delle variabili
  puntatore1 = &num1;
  puntatore2 = &num2;

  if(puntatore1 != puntatore2){
    printf("Indirizzi differenti\n");
  }
  printf("Indrizzo numero a: %p\n",puntatore1);
  printf("Indrizzo numero b: %p\n",puntatore2);
  return 0;
}
