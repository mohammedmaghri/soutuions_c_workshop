
#include <stdio.h>

int main() {

    float n1,n2,n3,moyen;
    int p1=2, p2=3, p3=5;
    printf("enter number 1 : ");
    scanf("%f",&n1);
    printf("enter number 2 : ");
    scanf("%f",&n2);
    printf("enter number 3 : ");
    scanf("%f",&n3);
    moyen = (n1*p1 + n2*p2 + n3*p3) / (p1*p2*p3);
    printf("la moyenne pondérée de trois nombres donnée : %.2f",moyen);

    return 0;
}
