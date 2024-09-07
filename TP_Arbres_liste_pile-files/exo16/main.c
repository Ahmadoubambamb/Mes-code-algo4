#include "listedc.h"
int main()
{listedchaine LL;
 LL=initlist(LL);
 ch15 matr , nom ,prenom; int age ,pos;
 printf("Donner les informations donne age null pour areter!!\n\n");
   while(1)
   {printf("donner age :");
     scanf("%d",&age);
     if(age==0)
       break;
       printf("\ndonner matricule nom prenom:");
       scanf("%s%s%s",matr,nom,prenom);
     LL=inserer_tete(LL,matr,nom,prenom,age);
     printf("\n");
   }
affiche(LL);
printf("\ndonner matricule nom prenom age:");
scanf("%s%s%s%d",matr,nom,prenom,&age);
LL=inserer_queue(LL,matr,nom,prenom,age);
printf("apres ajout queue \n");
affiche(LL);
printf("\ndonner matricule nom prenom age position:");
scanf("%s%s%s%d%d",matr,nom,prenom,&age,&pos);
LL=inserer_position(LL,matr,nom,prenom,age,pos);
affiche(LL);
printf("donner la position de l'individu a supprimer:");
scanf("%d",&pos);
LL=supp_position(LL,pos);
printf("apres supprission :\n");
affiche(LL);
LL=supp_agees(LL);
printf("apres suppression du plus agees :\n");
affiche(LL);
 return 0;
}

