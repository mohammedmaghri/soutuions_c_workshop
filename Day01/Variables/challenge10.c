#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
// Écrivez un programme pour trouver le volume d'une sphère. Prenez le rayon de la sphère en entrée de l'utilisateur. Formule pour le volume d'une sphère :


  float R, V;
  const float PI = 3.14;
  printf("enter la rayon de la sphère : ");
  scanf("%f",&R);
  V = 4 * PI * pow(R,3)/3;

  printf("le volume de la sphère est : %.2f",V);
  return 0;
}
