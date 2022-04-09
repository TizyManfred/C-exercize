#include <stdio.h>
#include <stdbool.h>

//protocollo
int somma(int a, int b);
float sommaReal (float a, float b);
int sottrazione (int a, int b);
float divisione(float a, float b);
int moltiplicazione(int a, int b);

int main(void) {
  int decisione, num1, num2, cond;
  float n1, n2;

  do{
    printf("Che cosa vuoi fare: \n1) Somma \n2) Sottrazione \n3)Divisione \n4)Moltiplicazione \n0)Esci dal programma \n\nInserisci la tua scelta: ");
    scanf("%d", &decisione);
    } while(decisione < 0 || decisione > 5);

  switch(decisione)
  {
    case 1: {
      do{
        printf("\nPer sommare due numeri interi permi 1 per sommare due numeri reali premi 2: ");
        scanf("%d",&cond);
        } while(cond < 0 || cond > 3);

      if (cond == 1){
        printf("Inserisci il primo numero: ");
        scanf("%d",&num1);
        printf("Inserisci il secondo numero: ");
        scanf("%d",&num2);

        printf("Il risultato è %d",somma(num1, num2));
      } else {
        printf("Inserisci il primo numero: ");
        scanf("%f",&n1);
        printf("Inserisci il secondo numero: ");
        scanf("%f",&n2);

        printf("Il risultato è %f", sommaReal(n1, n2));
        }
      break;
    }
    
    case 2: {
      printf("Inserisci il primo numero: ");
      scanf("%d",&num1);
      printf("Inserisci il secondo numero: ");
      scanf("%d",&num2);

      printf("Il risultato è %d", sottrazione(num1, num2));
      break;
    }
    
    case 3: {
      printf("Inserisci il primo numero: ");
      scanf("%f",&n1);
      printf("Inserisci il secondo numero: ");        
      scanf("%f",&n2);

      printf("Il risultato è %f", divisione(n1, n2));
      break;
    }
    case 4: {
      printf("Inserisci il primo numero: ");
      scanf("%d",&num1);
      printf("Inserisci il secondo numero: ");
      scanf("%d",&num2);

      printf("Il risultato è %d", moltiplicazione(num1, num2));
      break;
    }
    case 0: {
      printf("Grazie e arrivederci");
      break;
    }
  }
  return 0;
}

int somma(int a, int b){
  int sum;
  sum = a + b;
  return sum;
}

float sommaReal (float a, float b){
  float sum;
  sum = a + b;
  return sum;
}

int sottrazione (int a, int b){
  int sot;
  
  if(a>b){
    sot = a - b;
  } else {
    sot = b - a;
  }
  
  return sot;
}

float divisione(float a, float b){
  float div;
  div = a/b;
  return div;
}

int moltiplicazione(int a, int b){
  int mul;
  mul = a * b;
  return mul;
}
