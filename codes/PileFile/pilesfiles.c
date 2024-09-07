#include "pilesfiles.h"
listePersonne tete(FilePersonne F)
{return F.tete;}
FilePersonne initFile(FilePersonne F)
{
    F.tete=F.queue=NULL;
    F.taille=0;
    return F;
}
int filevide(FilePersonne F)
{return (F.taille==0);}
FilePersonne enfiler(FilePersonne F,chaine nom,int age)
{listePersonne m=creer_maillon(nom,age);
  if(filevide(F))
  { F.tete=F.queue=m;
      F.taille=1;
  }
  else
  {(F.queue)->suiv=m;
    F.queue=m;
   F.taille++;
  }
     return F;
}
FilePersonne defiler(FilePersonne F)
{ if(!filevide(F))
   {F.tete=supp_tete(F.tete);
    if(F.tete==NULL)
       F.queue=NULL;
       F.taille--;
   }
   return F;
}
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
    while(q)
    {printf("%s   %d\n\n",q->nom,q->age);q=q->suiv;}
}
void afficheFile(FilePersonne F)
{ listePersonne q=F.tete;
  if(!q)
    printf("!! File vide \n");
  while(q!=NULL)
  {printf("%s  %d | ",q->nom,q->age);
    q=q->suiv;}
    printf("\n");
}
listePersonne supp_tete(listePersonne P)
{listePersonne tmp;
  tmp=P;
  P=P->suiv;
  free(tmp);
  tmp=NULL;
  return P;
}
