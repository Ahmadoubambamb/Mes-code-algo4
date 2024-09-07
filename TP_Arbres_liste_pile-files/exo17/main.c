#include "pile.h"
int main()
{PilePersonne P; int age,pos; chaine nom;
   P=initPile(P);
    printf("donner l'age puis le nom :\n");
    for(int i=0;i<4;i++){
    scanf("%d%s",&age,nom);
    P=empiler(P,nom,age);}
    affichePile(P);
    printf("donner l'age et le nom de l'individu recherher:\n");
    scanf("%d%s",&age,nom);
    pos=recherche(P,nom,age);
    if(pos!=-1)
      printf("trouver a la position %d\n",pos);
    else
     printf("inexitant !!\n ");
  printf("donner la position de l'individu a supprimer :");
  scanf("%d",&pos);
  P=supp_position(P,pos);
  printf("\n apres supprission:\n");
  affichePile(P);
  printf("donner l'age puis le nom et la position a inserer:");
  scanf("%d%s%d",&age,nom,&pos);
  P=inserer_position(P,nom,age,pos);
  printf("\napres insertion :\n");
  affichePile(P);
}
