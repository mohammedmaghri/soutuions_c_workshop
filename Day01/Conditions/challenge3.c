#include <stdio.h>
#include <stdlib.h>

int main() {
 int n1,n2;
  printf("enter number one : ");
  scanf("%d",&n1);
  printf("enter number two : ");
  scanf("%d",&n2);
  if(n1 != n2)
    printf("%d ",n1+n2);
  else
    printf("%d ",(n1+n2)*3);
  
  
  return 0;
}