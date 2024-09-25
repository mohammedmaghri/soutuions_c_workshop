#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
/* Écrivez un programme pour trouver la surface d'un rectangle. Prenez la longueur et la largeur du rectangle en entrée de l'utilisateur. Formule pour la surface d'un rectangle :

  Surface = longueur * largeur */



  float longueur, largeur, surface;
  printf("enter longueur  : ");
  scanf("%f",&longueur);
  printf("enter largeur : ");
  scanf("%f",&largeur);
  surface = longueur * largeur;


  printf("la surface d'un rectangle est : %.2f",surface);
  return 0;
}
