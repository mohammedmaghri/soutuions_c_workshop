#include <stdio.h>
  int main() {

int age , numaccid,chose;
printf("enter your age :");
scanf("%d",&age);
printf("chose what type of car do you have :\n");
printf("Sport enter --> 1.\n");
printf("Family enter --> 2.\n");
printf("Many use enter --> 3.\n");
printf("enter your chose:");
scanf("%d",&chose);
printf("how much the accident do you have do :");
scanf("%d",&numaccid);
if(age<25)
 printf("Prime de base * 1.5");
else if (age>=25 && age <65)
 printf(" Prime de base");
else if(age > 65){
 printf(" Prime de base * 1.2");
   switch(chose){
   case 1 : printf(" Prime * 2");
            break;
   case 2 : printf(" Prime * 1.1");
            break;
   case 3 : printf(" Prime * 1.2");
            break;
   default : printf(" please chose between 1 and 3");
   }
}
else if(numaccid>1)
   printf("Ajoutez 30% à la prime.");
else
   printf("try again");
    return 0;
}
