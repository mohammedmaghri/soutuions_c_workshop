#include <stdio.h>

int main() {

   float R ,S,D;
    printf("Revenu annuel (en euros) :");
    scanf("%f",&R);
    printf("enter Score de cr�dit (sur 1000): ");
    scanf("%f",&S);
    printf("enter Dur�e du pr�t (en ann�es) : ");
    scanf("%f",&D);
    if (R>=30000 && S>=700 && D<=10)
        printf("eligible");
    else if (R>=30000 && S>=650 && D<=15)
        printf("eligible avec conditions");
    else
        printf("Non eligible");

    return 0;
}
