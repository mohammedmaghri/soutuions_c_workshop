#include <stdio.h>
#include <stdlib.h>

int main() {
  int num,d1,d2,d3,d4,d5,d6,inv;
  printf("enter the 4 digit number :");
  scanf("%d",&num);
  d1 = num/10;
  d2 = num%10;
  d3 = d1/10;
  d4 = d1%10;
  d5 = d3/10;
  d6 = d3%10;
  inv = (d2*1000)+(d4*100)+(d6*10)+(d5*1);
  printf("L'inverse du nombres est : %d",inv);



  return 0;
}
