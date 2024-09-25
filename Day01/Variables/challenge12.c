#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
/*Écrivez un programme C pour afficher un nombre entier à quatre chiffres dans l'ordre inverse sans utiliser de boucle. Par exemple, si le nombre entier est 1234, son inverse est 4321.*/

  int N, inverse;
  printf("enter un noumber entier : ");
  scanf("%d",&N);
  inverse = 0 ;
  do {
      inverse = (inverse * 10) + (N % 10);
      N = N / 10 ;
  }while (N != 0);
  printf("L'inverse du nombres est : %d",inverse);

  return 0;
}
