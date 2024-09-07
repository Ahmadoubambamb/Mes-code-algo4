 #ifndef PILESFILES_H_INCLUDED
#define PILESFILES_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

typedef struct
{listePersonne tete;
  listePersonne queue;
  int taille;
}FilePersonne;
listePersonne inserer_tete(listePersonne ,chaine,int);
listePersonne supp_tete(listePersonne);
listePersonne creer_maillon(chaine , int);
listePersonne tete(FilePersonne);
void affiche(PilePersonne);
FilePersonne initFile(FilePersonne);
FilePersonne enfiler(FilePersonne, chaine,int);
FilePersonne defiler(FilePersonne);
int filevide(FilePersonne);
PilePersonne initPile(PilePersonne );
PilePersonne empiler(PilePersonne,chaine,int);
PilePersonne depiler(PilePersonne);
void afficheFile(FilePersonne);
int pilevide(PilePersonne);
#endif
