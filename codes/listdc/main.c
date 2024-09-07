#include "listedoublechainee.h"
int main()
{ listedoublechainee LL;
    LL=initliste(LL);
printf("donner age nom :");
int a,pos ; chaine nom;
do{
scanf("%d%s",&a,nom);
if(a==0) break;
//LL=inserer_tete(LL,nom,a);
LL=inserer_queue(LL,nom,a);
}while(1);
afficher_bis(LL);
printf("donner age nom puis position:");
scanf("%d%s%d",&a,nom,&pos);
LL=inserer_postion_bis(LL,nom,a,pos);
afficher_bis(LL);
    return 0;
}
