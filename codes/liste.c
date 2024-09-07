#include "liste.h"
listePersonne creer_maillon(chaine nom , int a )
{ listePersonne nouv=(listePersonne)malloc(sizeof(struct personne));
  nouv->age=a; strcpy(nouv->nom,nom);
  nouv->suiv=NULL;
  return nouv;
}
listePersonne ajout_tete(listePersonne L,chaine nom ,int a)
{ listePersonne P=creer_maillon(nom,a);
    P->suiv=L;
    L=P;
    return L;
}
listePersonne ajout_Queue(listePersonne L ,chaine nom ,int a)
{ listePersonne m=creer_maillon(nom, a);
    if(L==NULL)
      L=m;
    else
    {
        listePersonne cour=L;
        while(cour->suiv!=NULL)
        cour=cour->suiv;
        cour->suiv=m;
    }
    return L;
}
listePersonne saisir_liste()
{ chaine nom ; int a;
    printf("donner l'age :");
    scanf("%d",&a);
    printf("donner le nom :");
    getchar();
    fgets(nom,254,stdin);
    listePersonne s=creer_maillon(nom,a); listePersonne cour=s;
    printf("donner l'age puis le nom pour arreter donner zero(0) !!\n ");
    while(1)
    {scanf("%d",&a);
        if(!a)
         break;
      getchar();
    fgets(nom,254,stdin);
    cour->suiv=creer_maillon(nom,a);
    cour=cour->suiv;
    printf("========================\n");
    }
   return s;
}
void affiche_liste(listePersonne L)
{listePersonne P=L;
  if(!L)
  { printf("liste vide !!\n");
    return;
  }
    while(P)
    { printf("%s    %d \n\n",P->nom,P->age);
      P=P->suiv;
    }
}
listePersonne detruire_maillon(listePersonne L)
{ if(L)
  { free(L);
    L=NULL;
  }
 return L;
}
listePersonne supp_tete(listePersonne L)
{ listePersonne temp=L;
  L=L->suiv;
  temp=detruire_maillon(temp);
  return L;
}
listePersonne supp_queue(listePersonne L)
{listePersonne cour=L;
  while(cour->suiv!=NULL)
    cour=cour->suiv;
  cour=detruire_maillon(cour);
  return L;
}
int longueur(listePersonne L)
{ int i=0; listePersonne P=L;
   while(P!=NULL)
   {i++;
     P=P->suiv;
   }
   return i;
}
listePersonne supp_liste(listePersonne L)
{ int i;
  for(i=0;i<longueur(L);i++)
  L=supp_tete(L);
  return L;
}
listePersonne supp_pos(listePersonne L, int i)
{ listePersonne prec;
  listePersonne cour=L; int j=0; prec=L;
  while(cour!=NULL &&j<i)
  {prec=cour;
    cour=cour->suiv;
    j++;
  }
 prec->suiv=cour->suiv;
  cour=detruire_maillon(cour);
  return L;
}
int recherche(listePersonne L , chaine nom ,int a)
{ listePersonne p=L; int i=0;
  while(p!=NULL &&srcmp(p->nom,nom)!=0&&p->age!=a )
  {
    p=p->suiv;
   i++;
  }
   if(p)
    return i;
  else
    return -1;
}
void tlf(listePersonne L, chaine nomf)
{ listePersonne P=L;
  FILE *fic=fopen(nomf,"a");
   while(p)
   {fprintf(fic,"%s %d",p->nom,p->age);
     p=p->suiv;
   }
   fclose(fic);
}
listePersonne ttl(tableauPersonne T,int n)
{listePersonne L=NULL; int i;
  for(i=n;i>0;i--)
    L=ajout_tete(T[i].nom,T[i].age);
  return L;
}
tableauPersonne tlt(listePersonne ,int *n)
{tableauPersonne T=(tableauPersonne)malloc(longueur(L)*sizeof(tpersonne));
  listePersonne p=L; *n=0;
  while(p)
  {T[(*n)].age=p->age;
    strcpy(T[(*n)].nom,p->nom);
    p=p->suiv;
    (*n)++;
  }
  return T;
}
