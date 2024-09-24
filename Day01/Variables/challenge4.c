#include <stdio.h>

int main() {
    float vit,metpar_s;
    printf("enter la vitesse en kilomètres par heure (km/h) : ");
    scanf("%f",&vit);
    metpar_s = vit * 0.27778;
    printf("la transforme en mètres par seconde (m/s):%.2f",metpar_s);

}
