#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//variabili globali
float a, b, c;
double x1,x2;

void soluzioni(double d) { 
   if(d<0)
      printf("\nNon possono esserci soluzioni reali");
   else if(d==0) {
      x1= (-b)/(2*a);
      printf("Due soluzioni reali coincidenti x1 e x2 uguali a %5.3lf ",x1);
  } else {
      x1=(-b-sqrt(d))/(2*a);
      x2=(-b+sqrt(d))/(2*a);
      printf("Due soluzioni reali distinte x1= %5.3lf e x2= %5.3lf ",x1,x2);
   }
}

void equazione_primo(){
    if((b==0)&&(c==0)) {
	printf("\nEquazione indeterminata");
      } else if(b==0) {
	printf("\nEquazione impossibile");
      } else {
	x1=-c/b;
	printf("\n x= %5.3f", x1);
	 }
}

int main(void){
  double d;
  
  printf("Coefficiente a: ");
  scanf("%f", &a);
  printf("\nCoefficiente b: ");
  scanf("%f", &b);
  printf("\nCoefficiente c: ");
  scanf("%f", &c);
  
  if(a==0) {
    equazione_primo();
  } else {
    d=b*b-4*a*c;
    printf("Il delta è %lg",d);
    soluzioni(d);
  }
  return 0;
}
