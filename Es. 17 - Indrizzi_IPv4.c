#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>

int prefixLength(int sub[]);
char classe(int ip[]);
int nHost(int pL);

int main(void) {
  int i = 0;
  int temp, len, host;
  int sub[4];
  int ip[4];
  char cl;

  printf("Inserisci l'IP: \n");
  while(i < 4){
    do {
      printf("Inserisci la %d parte: ", i+1);
      scanf("%d",&temp);
      } while (temp < 0 || temp > 255);
    ip[i] = temp;
    i = i + 1;
    }

  cl = classe(ip);
  printf("\nL'indrizzo è di classe %c\n", cl);

  i = 0;

  printf("Inserisci la subnet mask: \n");
  while(i < 4){
    do {
      printf("Inserisci la %d parte: ", i+1);
      scanf("%d",&temp);
      } while (temp < 0 || temp > 255);
    sub[i] = temp;
    i = i + 1;
    }

  len = prefixLength(sub);
  printf("\nIl prefix lenght è: %d",len);
  host = nHost(len);
  printf("\nIl numero di host disponibili è %d", host);
  
  return 0;
}

int prefixLength(int sub[]){
  int len = 0;
  int i = 0;
  bool cond = true;
  while(i < 4 && cond == true){
    switch(sub[i]){
      case 0: {
        cond = false;
        break;
      }
      case 128: {
        len = len + 1;
        break;
      }
      case 192: {
        len = len + 2;
        break;
      }
      case 224: {
        len = len + 3;
        break;
      }
      case 240: {
        len = len + 4;
        break;
      }
      case 248: {
        len = len + 5;
        break;
      }
      case 252: {
        len = len + 6;
        break;
      }
      case 254: {
        len = len + 7;
        break;
      }
      case 255: {
        len = len + 8;
        break;
      }
    }
    i = i + 1;
  }
  return len;
}

char classe(int ip[]){
  char cl;
  if(ip[0] < 128){
    cl = 'A';
  } else if (ip[0] < 192){
    cl = 'B';
  } else if (ip[0] < 224){
    cl = 'C';
  } else if (ip[0] < 240){
    cl = 'D';
  } else {
    cl = 'E';
  }
  return cl;
}

int nHost(int pL){
  int host, e;
  e = 32 - pL;
  host = pow(2,e);

  //tolgo indrizzo di rete, broacast e gateway
  host = host - 3;
  
  return host;
}
