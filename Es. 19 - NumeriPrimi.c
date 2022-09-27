#include <stdio.h>
#include <stdbool.h>
#include <math.h> 

//prototipo della funzione
bool primo(int num){
  bool cond = true;
  int c = 3;
  if(num == 1){
    cond = true;
  } else if(num == 2){
    cond = true;
  } else if(num == 3){
    cond = true;
  } else {
    if(num % 2 == 0){
      cond = false;
    }else{
      do{
        if(num % c == 0){
          cond = false;
        } else {
           c = c + 2;
        }
      }while(c <= num || cond == false);
    }  
  }
  return cond;
}

int main(void) {
  int i = 1;
  int primi = 0;
  bool cond;
  
  while(primi < 50){
    cond = primo(i);
    if(cond){
      primi = primi + 1;
      printf("%d ", i);
    } else {
      
    }
    
    i = i + 1;
  }
  
  return 0;
}
