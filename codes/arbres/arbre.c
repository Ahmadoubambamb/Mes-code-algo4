#include "arbre.h"
Arbre creer_noeud(int n,Arbre g,Arbre d)
{Arbre a=(Arbre)malloc(sizeof(Noeud));
 a->val=n;
 a->sag=g;
 a->sad=d;
 return a;
}
void prefixe_g(Arbre a)
{ if(a!=NULL)
  {printf("%d-> ",a->val);
   prefixe_g(a->sag);
   prefixe_g(a->sad);
  }
}
void prefixe_d(Arbre a)
{if(a!=NULL)
 prefixe_d(a->sad);
 prefixe_d(sag);
}
void postfixe_g(Arbre a)
{  if(a!=NULL)
   {postfixe_g(a->sag);
    postfixe_g(a->sad);
    printf("%d-> ",a->val);
   }
}
void postfixe_d(Arbre a)
{  if(a!=NULL)
   {postfixe_d(a->sad);
    postfixe_d(a->sag);
    printf("%d-> ",a->val);
   }
}
void infixe_g(Arbre a)
{ if(a!=NULL)
  {infixe_g(a->sag);
      printf("%d-> ",a->val);
    infixe_g(a->sad);
  }
}
void infixe_d(Arbre a)
{ if(a!=NULL)
  {infixe_d(a->sad);
      printf("%d-> ",a->val);
    infixe_d(a->sag);
  }
}
int nbr_feuilles(Arbre a)
{ if(a==NULL)
    return 0;
    if(a->sad==NULL &&a->sag)
       return 1;
    else
       return (nbr_feuilles(a->sag)+nbr_feuilles(a->sad));
}
int max(int a,int b)
{if(a>b)
   return a;
   else
      return b;
}
int hauteur(Arbre a)
{if(a==NULL)
    return 0;
    else
      return(1+max(hauteur(a->sag),hauteur(s->sad));
}
int est_une_feuille(Arbre a)
{
    return(a->sag==NULL && a->sad==NULL);
}
int nbr_noeuds(Arbre a)
{if(a!=NULL){
    if(a->sag==NULL && a->sad==NULL)
        return 0;
    else
       return 1+nbr_noeuds(a->sag)+nbr_noeuds(a->sad);
    }
}
int recherche_ABR(Arbre a,int n)
{   if(a==NULL) return 0;
    if(a->val==n)
     return 1;
    else if(a->val>n)
        return recherche_ABR(a->sag,n);
            else
              return recherche_ABR(s->sad,n);
}
int recherche_AB(Arbre a,int n)
{ if(a==NULL)
    return 0;
    if(a->val==n)
      return 1;
    return recherche_AB(a->sag,n)||recherche_AB(a->sad);
}
int max_ABR(Arbre a)
{if(a!=NULL)
  {if(a->sad==NULL)
      return a->val;
      return max_ABR(a->sad);
  }
}
int max_AB(Arbre a)
{if(a!=NULL)
  {if(a->sag==NULL && a->sad==NULL)
    return a->val;
    else
    int n=max(max_AB(a->sag),max_AB(a->sad));
    return (a->val>n ? a->val:n);
  }
}
Arbre inserer_ABR(Arbre a,int n)
{if(a==NULL)
  a=creer_noeud(n,NULL,NULL);
  else
  {if(n>a->val)
   a->ad=inserer_ABR(a->sad,n);
   else
     a->sag=inserer_ABR(a->sag,n);
  }
  return a;
}
