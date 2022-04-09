#include <stdio.h>
#include <string.h>

int anagramma(char s1[], char s2[], int len);

int main(void) {
  int len, ana;

  printf("Inserisci la lunghezza delle stinghe: ");
  scanf("%d",&len);
  
  char stringa1[len];
  char stringa2[len];

  printf("Inserisci la prima stringa: ");
  scanf("%s", stringa1);

  printf("Inserisci la seconda stringa: ");
  scanf("%s", stringa2);

  ana = anagramma(stringa1, stringa2, len);
  printf("\n%d", ana);
  
  return 0;
}

int anagramma(char s1[], char s2[], int len){
  int ver = 0;
  int verifica = 1;
  int i, j;

  j = 0;
  i = 0;
  
  while(i<len && verifica == 1){
    while(j<len && ver == 0){
      if(s1[i] == s2[j]){
        ver = 1;
      } else {
        ver = 0;
      }
      j = j + 1;
    }
    j = 0;
    verifica = ver;
    ver = 0;
    i = i + 1;
  }
  
  return verifica;
}
