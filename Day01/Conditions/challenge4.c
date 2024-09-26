#include <stdio.h>
#include <math.h>

int main() {
  float a,b,c,delta,x,x1,x2;
  printf("enter la valeur de a : ");
  scanf("%f",&a);
  printf("enter la valeur de b : ");
  scanf("%f",&b);
  printf("enter la valeur de c : ");
  scanf("%f",&c);
  delta = pow(b,2) - 4*a*c;
  if (delta > 0){
    x1 = (-b - sqrt(delta))/2*a;
    x2 = (-b + sqrt(delta))/2*a;
    printf("les solutions sont : %.2f et %.2f\n",x1,x2);
  }
  else if (delta == 0){
    x = -b/2*a;
    printf("la solution est : %.2f\n",x);
  }
  else
    printf("pas de solution");
  


  
  return 0;
}