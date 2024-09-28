#include <stdio.h>

int main() {

    int n,i;
    long long f = 0;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        f=f+i;

    }
    printf("la somme the n :%lli",f);
    return 0;
}
