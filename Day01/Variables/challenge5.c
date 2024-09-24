
#include <stdio.h>

int main() {

    float C;
    printf("enter la température en celsius : ");
    scanf("%f",&C);
    if (C<0)
     printf("solide");
    else if (C<=0 ||  C < 100)
     printf("Liquide");
    else
     printf("Gaz");

    return 0;

}
