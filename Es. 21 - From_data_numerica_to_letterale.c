#include <stdio.h>
#include <string.h>

char stringMese[10];

void conversioneMese(int mese){
  switch (mese) {
  case 1:
    strcpy(stringMese,"Gennaio");
    break;
  case 2:
    strcpy(stringMese,"Febbraio");
    break;
  case 3:
    strcpy(stringMese,"Marzo");
    break;
  case 4:
    strcpy(stringMese,"Aprile");
    break;
  case 5:
    strcpy(stringMese,"Maggio");
    break;
  case 6:
    strcpy(stringMese,"Giugno");
    break;
  case 7:
    strcpy(stringMese,"Luglio");
    break;
  case 8:
    strcpy(stringMese,"Agosto");
    break;
  case 9:
    strcpy(stringMese,"Settembre");
    break;
  case 10:
   strcpy(stringMese,"Ottobre");
    break;
  case 11:
    strcpy(stringMese,"Novembre");
    break;
  case 12:
    strcpy(stringMese,"Dicembre");
    break;
  }
}


int main(void) {
  int giorno, mese, anno;
  
  printf("Inserisci il giorno: ");
  scanf("%d",&giorno);
  printf("Inserisci il mese: ");
  scanf("%d",&mese);
  printf("Inserisci il anno: ");
  scanf("%d",&anno);

  
  printf("%d %s %d",giorno, stringMese, anno);
  return 0;
}
