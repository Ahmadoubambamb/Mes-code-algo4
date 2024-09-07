#ifndef LISTEDC_h_INCLUDED
#define LISTEDC_h_INCLUDED
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
typedef char ch15[16];
typedef struct personne
{ch15 matr,nom,prenom;
  int age;
struct personne *succ;
struct personne *prec;
}Personne;
typedef Personne *p2Personne;
typedef struct
{ p2Personne tete;
  p2Personne queue;
}listedchaine;
listedchaine initlist(listedchaine);
p2Personne creer_maillon(ch15,ch15,ch15,int);
listedchaine inserer_tete(listedchaine ,ch15,ch15,ch15,int );
listedchaine inserer_queue(listedchaine,ch15,ch15,ch15,int);
listedchaine inserer_position(listedchaine,ch15,ch15,ch15,int,int);
listedchaine supp_position(listedchaine,int);
listedchaine supp_agees(listedchaine);
void affiche(listedchaine);
#endif
