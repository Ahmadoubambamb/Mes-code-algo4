#include "pile.h"
int pilevide(PilePersonne S)
{ return(S.taille==0);
}
PilePersonne initPile(PilePersonne P)
{ P.sommet=NULL;
  P.taille=0;
  return P;
}
PilePersonne empiler(PilePersonne S,chaine nom ,int age)
{ S.sommet=inserer_tete(S.sommet,nom,age);
    S.taille++;
    return S;
}
listePersonne creer_maillon(chaine nom ,int age)
{listePersonne m=(listePersonne)malloc(sizeof(Personne));
  strcpy(m->nom,nom); m->age=age;
  m->suiv=NULL;
return m;
}
listePersonne inserer_tete(listePersonne E ,chaine nom ,int age)
{listePersonne m=creer_maillon(nom,age);
  if(E==NULL)
     E=m;
    else{
    m->suiv=E;
   E=m;}
   return E;
}
PilePersonne depiler(PilePersonne P)
{if(!pilevide(P))
    {P.sommet=supp_tete(P.sommet);
    P.taille--;}
    return P;
}
void affichePile(PilePersonne P)
{listePersonne q=P.sommet;
  if(!q)
    printf("!! Pile vide \n");
  printf("\n=====================\n");
    while(q)
    {printf("%s   %d\n\n",q->nom,q->age);q=q->suiv;}
}
listePersonne supp_tete(listePersonne P)
{listePersonne tmp;
  tmp=P;
  P=P->suiv;
  free(tmp);
  tmp=NULL;
  return P;
}
int recherche(PilePersonne P,chaine nom ,int age)
{int i=P.taille;listePersonne m=P.sommet;
   while(i-- >0)
   {if(strcmp(m->nom,nom)==0&&m->age==age)
       return (P.taille-i);
       m=m->suiv;
   }
   return -1;
}
PilePersonne supp_position(PilePersonne P ,int pos)
{listePersonne cour=P.sommet,prec=P.sommet; int i=1;
  if(pos==1)
    P=depiler(P);
   else{
    while(i++<pos)
    {prec=cour;
      cour=cour->suiv;
    }
  prec->suiv=cour->suiv;
  free(cour);
    cour=NULL;}
    P.taille--;
    return P;
}
PilePersonne inserer_position(PilePersonne P,chaine nom,int age,int pos)
{listePersonne cour=P.sommet,prec=P.sommet; int i=1;
  listePersonne m=creer_maillon(nom,age);
  if(pos==1)
    P=empiler(P,nom,age);
  else{
  while(i++<pos)
  {prec=cour;
    cour=cour->suiv;
  }
  m->suiv=cour;
  prec->suiv=m;}
  P.taille++;
  return P;
}
