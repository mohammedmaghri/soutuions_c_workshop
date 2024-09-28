#include <stdio.h>

int main() {

   float R ,S,D;
    printf("Revenu annuel (en euros) :");
    scanf("%f",&R);
    printf("enter Score de crédit (sur 1000): ");
    scanf("%f",&S);
    printf("enter Durée du prêt (en années) : ");
    scanf("%f",&D);
    if (R>=30000 && S>=700 && D<=10)
        printf("eligible");
    else if (R>=30000 && S>=650 && D<=15)
        printf("eligible avec conditions");
    else
        printf("Non eligible");

    return 0;
}
