#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
// �crivez un programme pour trouver le volume d'une sph�re. Prenez le rayon de la sph�re en entr�e de l'utilisateur. Formule pour le volume d'une sph�re :


  float R, V;
  const float PI = 3.14;
  printf("enter la rayon de la sph�re : ");
  scanf("%f",&R);
  V = 4 * PI * pow(R,3)/3;

  printf("le volume de la sph�re est : %.2f",V);
  return 0;
}
