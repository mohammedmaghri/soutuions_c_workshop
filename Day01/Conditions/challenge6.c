#include <stdio.h>
#include <stdlib.h>

int main() {

  int num;
  printf("enter number  : ");
  scanf("%d",&num);
  if (num > 0)
    printf("this number %d is positive ",num);
  else if (num < 0)
    printf("this number %d is negative",num);
  else
    printf("this number %d is Zero",num);

  return 0;
}
