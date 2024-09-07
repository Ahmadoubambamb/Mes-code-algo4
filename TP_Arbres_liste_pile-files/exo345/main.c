#include "fonct.h"
int main()
{ liste L=NULL ,L1=NULL,L2=NULL,T=NULL;int ps1,ps2,k;
 L=saisir_liste();
 affiche(L);
 L=inverse(L);
 printf("apres inversion !!\n");
 affiche(L);
/*separer(L,&L1,&L2);
printf("les entier positif ou null :\n");
affiche(L1);
printf("les entier negatif :\n");
affiche(L2);
do{
printf("donner les positions a echanger NB:par ordre :");
scanf("%d%d",&ps1,&ps2);
}while(ps1>ps2);
L=echange(L,ps1,ps2);
affiche(L);
int x;
printf("donner l'entier tete : ");
scanf("%d",&x);
separerList(L,&L1,&T,x);
affiche(L);
affiche(T);
printf("donner la position : ");
scanf("%d",&k);
separerlistk(L,&L1,&T,k);
affiche(L);
affiche(T);
affiche(L);
separerListM(&L,&T);
affiche(L);
affiche(T);*/
return 0;
}
