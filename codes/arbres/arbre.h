#ifndef ARBRE_H_INCLUDED
#define ARBRE_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
typedef struct noeud
{int val;
 struct noeud *sag;
 struct noeud *sad;
}Noeud;
typedef Noeud *Arbre;
typedef struct valeur
{int valf;
   struct valeur *suiv;
}Valeur;
typedef Valeur *liste;
typedef struct
{liste *tete;
 liste *queue;
 int taille;
}File;
Arbre creer_noeud(int , Arbre,Arbre);
void prefixe_g(Arbre);
void prefixe_d(Arbre);
void postfixe_g(Arbre);
void postfixe_d(Arbre);
void infixe_g(Arbre);
void infixe_d(Arbre);
int nbr_feuilles(Arbre);
int max(int ,int);
int hauteur(Arbre);
int nbre_noeuds(Arbre);
int est_une_feuille(Arbre);
int recherche_ABR(Arbre , int);
int recherche_AB(Arbre,int);
int max_ABR(Arbre);
int max_AB(Arbre);
Arbre inserer_ABR(Arbre,int);
#endif
