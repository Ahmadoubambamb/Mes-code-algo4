#ifndef LISTEDOUBLECHAINEE_H_INCLUDED
#define LISTEDOUBLECHAINEE_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef char chaine[255];
typedef struct personne_bis
{chaine nom;
 int age;
struct personne_bis *suiv;
struct personne_bis *prec;
}Personne_bis;
typedef Personne_bis *pPersonne_bis;

typedef struct
{pPersonne_bis tete;
  pPersonne_bis queue;
}listedoublechainee;
listedoublechainee initliste(listedoublechainee);
pPersonne_bis creer_maillon(chaine ,int);
listedoublechainee inserer_tete(listedoublechainee , chaine ,int );
listedoublechainee inserer_queue(listedoublechainee ,chaine , int );
listedoublechainee inserer_postion_bis(listedoublechainee ,chaine ,int, int);
void afficher_bis(listedoublechainee);
listedoublechainee supp_tete_bis(listedoublechainee);
listedoublechainee supp_pos_bis(listedoublechainee , int );
#endif
