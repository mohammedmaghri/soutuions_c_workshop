#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {


  float x,y,z,distance;
  printf("enter x : ");
  scanf("%f",&x);
  printf("enter y : ");
  scanf("%f",&y);
  printf("enter z : ");
  scanf("%f",&z);
  distance = sqrt(pow((x*2)-(x*1),2) + pow((y*2)-(z*1),2) + pow((z*2)-(z*1),2));
  printf("la distance enter deux points donnés dans un espace 3D est : %.2f  ",distance);
  return 0;
}
