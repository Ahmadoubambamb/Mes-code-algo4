#include "pilesfiles.h"
int main()
{ FilePersonne F;
   F=initFile(F);
   chaine nom ; int age;
   printf("donner le nom et l'age :");
   while(1)
   { scanf("%s%d",nom,&age);
     if(!age)
         break;
     F=enfiler(F,nom,age);
   }
afficheFile(F);
printf("apres defilement on a:\n");
F=defiler(F);
afficheFile(F);
}
