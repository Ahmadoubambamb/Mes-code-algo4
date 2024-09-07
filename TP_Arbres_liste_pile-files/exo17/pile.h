#ifndef PILE_H_INCLUDED
#define PILE_H_INCLUDED
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
typedef char chaine[255];
typedef struct personne
{ chaine nom;
    int age;
    struct personne *suiv;
}Personne;
typedef Personne *listePersonne;
typedef struct
{listePersonne sommet;
  int taille;
}PilePersonne;
listePersonne inserer_tete(listePersonne ,chaine,int);
listePersonne supp_tete(listePersonne);
listePersonne creer_maillon(chaine , int);
PilePersonne initPile(PilePersonne );
PilePersonne empiler(PilePersonne,chaine,int);
PilePersonne depiler(PilePersonne);
PilePersonne supp_position(PilePersonne , int);
PilePersonne inserer_position(PilePersonne,chaine,int,int);
int recherche(PilePersonne,chaine ,int);
void affichePile(PilePersonne);
#endif
