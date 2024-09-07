#include "liste.h"
phrase creer_maillon(chaine nom )
{ phrase nouv=(phrase)malloc(sizeof(Mots));
    if(nouv)
   { strcpy(nouv->nom,nom);
    nouv->suiv=NULL;
  return nouv;
   }
}
phrase ajoutTete(phrase L , chaine nom)
{ phrase p=creer_maillon(nom);
  if(L==NULL)
  L=p;
 else
   {p->suiv=L;
     L=p;
   }
return L;
}
void ajoutTeteA(phrase *L ,chaine nom)
{ phrase p=creer_maillon(nom);
  if(*L==NULL)
  *L=p;
else
  {p->suiv=*L;
  *L=p;
  }
}
phrase ajoutQueue(phrase L, chaine nom )
{phrase p=creer_maillon(nom);
  if(!L)
  L=p;
  else
  { phrase q=L ;
     while(q!=NULL)
     q=q->suiv;
     q=p;
  }

return L;
}
void ajoutQA(phrase *L ,chaine nom)
{ phrase p=creer_maillon(nom);
  if(*L)
   *L=p;
   else
    {phrase q=*L;
     while(q!=NULL)
      q=q->suiv;
      q=p;
    }
}
void affiche_maillon(phrase L)
{ if(L)
   printf(" %s  ",L->nom);
}
void affiche_liste(phrase L)
{ phrase p=L ;
  while(p!=NULL)
  { affiche_maillon(p);
   p=p->suiv;
  }
  printf("\n");
}

int longueur(phrase L)
{int i=0 ;
 phrase p=L;
 while(p)
 {i++;
  p=p->suiv;
 }
return i;
}
int anagramme(phrase L1 ,phrase L2)
{ phrase p1,p2;
 if(longueur(L1)!=longueur(L2))
    return 0;
   int i,j,bool;
  p1=L1;
for(i=0;i<longueur(L1);i++)
{  p2=L2; bool=0;
 for(j=0;j<longueur(L1);j++)
   { if(strcmp(p1->nom,p2->nom)==0)
     { bool=1;
       break ;
     }
 p2=p2->suiv;
   }
  if(!bool)
  return 0;
p1=p1->suiv;
}
return 1;
}

phrase saisir_liste()
{ phrase L,p; chaine mot ; int a;
  printf("donner des mots et tape exit a la fin pour arreter :\n");
  scanf("%s",mot);
  p=L=creer_maillon(mot);
  while(1)
  {
    scanf("%s",mot);
   if(strcmp(mot,"exit")==0)
     break;
    p->suiv=creer_maillon(mot);
    p=p->suiv;
  }
  return L;
}
void charger(phrase L ,char *nomf)
{ FILE *fic=fopen(nomf,"a");
  if(fic==NULL)
  {printf("impossible d'ouvrir le fichier !!");
    exit(1);
  }
  else
  {phrase p=L;
    while(p)
    {fputs(p->nom,fic);
      p=p->suiv;
    }
    fclose(fic);
  }
}
