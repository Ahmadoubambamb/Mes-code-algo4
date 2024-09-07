#ifndef LISTE_H_INCLUDED
#define LISTE_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef char chaine[255];
typedef struct personne
{ chaine nom;
    int age;
  struct personne *suiv;
}pPersonne ;
typedef pPersonne *listePersonne ;
typedef struct tpersonne
{ chaine nom;
  int age ;
}tpersonne;
typedef tpersonne *tableauPersonne;
listePersonne creer_maillon(chaine ,int );
listePersonne ajout_tete(listePersonne ,chaine , int );
listePersonne ajout_Queue(listePersonne, chaine , int );
void affiche_liste(listePersonne);
listePersonne detruire_liste(listePersonne);
int longueur(listePersonne );
listePersonne detruire_maillon(listePersonne);
listePersonne supp_maillon(listePersonne);
listePersonne supp_liste(listePersonne);
listePersonne supp_queue(listePersonne);
listePersonne supp_tete(listePersonne);
listePersonne supp_pos(listePersonne ,int);
listePersonne saisir_liste();
void tlf(listePersonne ,chaine);
int rechercher(listePersonne ,chaine , int);
listePersonne ttl(tableauPersonne ,int );
#endif

