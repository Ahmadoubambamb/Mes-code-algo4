#include "liste.h"
int main()
{ listePersonne L=NULL ; int pos;
    L=saisir_liste();
    affiche_liste(L);
  /*  L=supp_queue(L);
    printf("****** Apres supp_queue ******\n");
    affiche_liste(L);
    L=supp_tete(L);
    L=supp_liste(L);
    printf("****** Apres supp_liste ******\n");
    affiche_liste(L);*/
printf("donner la position :");
scanf("%d",&pos);
L=supp_pos(L,pos);
affiche_liste(L);
}
