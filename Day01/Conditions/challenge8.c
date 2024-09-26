#include <stdio.h>

int main() {
    int note;
    printf("enter your note :");
    scanf("%d",&note);
    if(note < 10)
      printf("failled");
    else if (note >= 10 && note < 12  )
      printf("normal");
    else if (note >= 12 && note < 14)
      printf("good");
    else if (note >=14 && note <= 16)
      printf("very good");
    else if (note > 16)
      printf("great");
    else
      printf("enter a number under 20");
    
    

    return 0;
}