#ifndef FONCT_H_INCLUDED
#define FONCT_H_INCLUDED
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct ENTIER
{int element;
  struct ENTIER *suiv;
}entier ;
typedef entier *liste;

liste cree_maillon(int );
liste saisir_liste();
liste ajoutT(liste , int);
void ajoutTete(liste * , int );
void affiche(liste );
void supprimer(liste);
liste inverse(liste );
liste inverse_rec(liste);
void ajoutQ(liste *, int );
liste copieListe(liste);
void separer(liste  ,liste * , liste *);
//exo5 Ecrire un algorithme sur une liste d’entiers simplement chaînée qui échange les positions des nœuds donnés par deux pointeurs g et d
liste echange(liste ,int , int );
//void echange(liste *,liste *,liste *);
//exo10
void separerList(liste * ,liste *,int);
void separerlistk(liste,liste * ,liste * ,int );
void separerM(liste *,liste *);
#endif
