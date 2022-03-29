#include <stdio.h>

int main(void) {
  int num1, num2, num3, num4, somma;
  float media;
  do{
    printf("Inserisci il primo voto: ");
    scanf("%d", &num1);
    }while(num1<0 || num1>10);

  do{
    printf("Inserisci il secondo voto: ");
    scanf("%d", &num2);
    }while(num2<0 || num2>10);

  do{
    printf("Inserisci il terzo voto: ");
    scanf("%d", &num3);
    }while(num3<0 || num3>10);

  do{
    printf("Inserisci il quarto voto: ");
    scanf("%d", &num4);
    }while(num4<0 || num4>10);

  somma = num1 + num2 + num3 + num4;
  media = somma/4;
  
  if (media<6){
    printf("Sei insufficiente");
  } else {
    printf("Sei sufficiente");
  }
  
  return 0;
}
