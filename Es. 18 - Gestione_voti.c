#include <stdio.h>

//prototipo della funzione
void carica_array(int len, float voti[]);
void stampaArray(int len, float voti[]);
float media(int len, float voti[]);
void invertiArray(int len, float voti[]);
void modificaVoto(int posizione, float voto, float voti[]);

int main(void) {
  int len, scelta, posizione;
  float med, voto;
  
  printf("Inserisci la lunghezza del vettore: ");
  scanf("%d",&len);
  float voti[len];
  int controllo = 1;

  carica_array(len, voti);

  while(controllo == 1){
    do{
      printf("\nMenu\n");
      printf("---\n");
      printf("1) Stampa i voti\n");
      printf("2) Media dei voti\n");
      printf("3) Inverti array\n");
      printf("4) Modifica voto\n");
      printf("0) Esci\n");
      printf("---\n");
      printf("Inserisci la tua scelta: ");
      scanf("%d", &scelta);
      }while(scelta < 0 || scelta > 4);
      
    switch(scelta){
      case 1: {
        stampaArray(len, voti);
        break;
      }
  
      case 2: {
        med = media(len, voti);
        printf("La media dei voti è %f", med);
        break;
      }
  
      case 3: {
        invertiArray(len, voti);
        break;
      }
  
      case 4: {
        printf("Inserisci la posizione del voto che vuoi modificare: ");
        scanf("%d", &posizione);
        printf("Inserisci il nuovo voto: ");
        scanf("%f", &voto);
  
        modificaVoto(posizione, voto, voti);
        
        break;
      }
  
      case 0: {
        printf("Grazie e arrivederci");
        controllo = 0;
        break;
      }
    }
  }
  return 0;
}

void carica_array(int len, float voti[]){
  int i;
  float voto;
  
  for(i = 0; i < len; i++){
    do{
    printf("Inserisci il valore: ");
    scanf("%f", &voto);
    }while(voto < 3 || voto > 10);

    voti[i] = voto;
  }
}

void stampaArray(int len, float voti[]){
  int i;
  float temp;
  
  for(i = 0; i < len; i++){
    temp = voti[i];
    printf("Il valore alla posizione %d è %f \n", i, temp);
  }
}

float media(int len, float voti[]){
  float somma, media;
  int i;

  somma = 0;
  
  for(i = 0; i < len; i++){
    somma = somma + voti[i];
  }
  
  media = somma/len;
  
  return media;
}

void invertiArray(int len, float voti[]){
  int i = 0;
  int x = len - 1;
  float temp;

  float invertito[len];

  for(i = 0; i < len; i ++){
    invertito[i] = voti[i];
  }

  i = 0;

  while(i < (len/2)){
    temp = invertito[x];
    invertito[x] = invertito[i];
    invertito[i] = temp;

    i = i + 1;
    x = x - 1;
  }

  stampaArray(len, invertito);
}

void modificaVoto(int posizione, float voto, float voti[]){
  voti[posizione] = voto;
}
