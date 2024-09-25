#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

  float a,b,c,moyen;
  printf("enter number 1 : ");
  scanf("%f",&a);
  printf("enter number 2 : ");
  scanf("%f",&b);
  printf("enter number 3 : ");
  scanf("%f",&c);
  moyen =pow(a * b * c ,1.0/3.0);

  printf("la moyenne géométrique de trois nombres saisis : %.2f",moyen);
  return 0;
}
