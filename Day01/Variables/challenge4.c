#include <stdio.h>

int main() {
    float vit,metpar_s;
    printf("enter la vitesse en kilom�tres par heure (km/h) : ");
    scanf("%f",&vit);
    metpar_s = vit * 0.27778;
    printf("la transforme en m�tres par seconde (m/s):%.2f",metpar_s);

}
