include <stdio.h>
#include <math.h>

int main() {
  int A,m,d,h,min,s,choice;
  printf("\nenter a number of year :");
  scanf("%d",&A);
  printf("chose a number for calcule how much number of year : \n");
  printf("Months --> 1.\n");
  printf("Days --> 2.\n");
  printf("Hours --> 3.\n");
  printf("Minutes --> 4.\n");
  printf("Seconds --> 5.\n");
  printf("\nenter the number chose :");
  scanf("%d",&choice);
  m = A*12;
  d = A*365;
  h = A*365*24;
  min = A*365*24*60;
  s = A*365*24*60*60;
  switch(choice){
    case 1 : printf("the number of months is : %d",m);
             break;
    case 2 : printf("the number of days is : %d",d);
             break;
    case 3 : printf("the number of hours is : %d",h);
             break;
    case 4 : printf("the number of minutes is : %d",min);
             break;
    case 5 : printf("the number of seconds is : %d",s);
             break;
    default : printf("error");
    
  }
  

  
  return 0;
}