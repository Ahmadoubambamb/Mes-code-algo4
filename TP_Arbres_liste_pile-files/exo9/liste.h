#ifndef LISTE_H_INCLUDED
#define LISTE_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef char chaine[255];
typedef struct mot
{ chaine nom;
  struct mot *suiv ;
}Mots;
typedef Mots *phrase;
phrase creer_maillon(chaine);
phrase ajoutTete(phrase , chaine);
void ajoutTeteA(phrase * , chaine );
phrase ajoutQueue(phrase , chaine );
void ajoutQA(phrase *,chaine);
void affiche_maillon(phrase );
void affiche_liste(phrase);
int longueur(phrase);
phrase saisir_liste();
int anagramme(phrase ,phrase);
void charger(phrase , char *);
#endif
