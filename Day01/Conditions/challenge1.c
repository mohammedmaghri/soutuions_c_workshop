#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
/*Écrivez un programme qui demande un nombre et affiche si ce nombre est pair ou impair.

*/
  int N;
  printf("enter number : ");
  scanf("%d",&N);
  if (N % 2 == 0)
    printf("pair");
  else
    printf("impair");
  return 0;
}
