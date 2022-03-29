#include <stdio.h>

int main(void) {
  int num1, num2, risultato;

  printf("Inserisci il primo numero: ");
  scanf("%d", &num1);
  
  printf("Inserisci il secondo numero: ");
  scanf("%d", &num2);

  if (num1%2 == 0 && num2%2 == 0){
    risultato = num1*num2;
  } else if(num1%2 == 0 || num2%2 == 0){
    risultato = num1 + num2;
  } else {
    if (num1>num2){
      risultato = num1/num2;
    } else{
      risultato = num2/num1;
    }
  }
  
  printf("Il risultato %d",risultato);
  return 0;
}
