#include "fonct.h"
liste cree_maillon(int n)
{ liste nouv=(liste)malloc(sizeof(entier));
   nouv->element=n;
   nouv->suiv=NULL;
   return nouv;
}
liste ajoutT(liste L , int n)
{   liste nouv=cree_maillon(n);
    nouv->suiv=L ;
    L=nouv;
    return L;
}
void ajoutTete(liste *L ,int n)
{ liste nouv=cree_maillon(n);
  nouv->suiv=*L;
   *L=nouv;
}
void ajoutQ(liste *L ,int n)
{ liste nouv=cree_maillon(n);
    if(*L==NULL)
      *L=nouv;
      else
      { liste p=*L;
          while(p->suiv!=NULL)
            p=p->suiv;
            p->suiv=nouv;
      }

}
void affiche(liste L)
{ liste p=L;
    while(p!=NULL)
    { printf(" %d -->",p->element);
       p=p->suiv;
    }
    printf(" NULL\n");
}
liste saisir_liste()
{ liste L,p;
int e,choix ;
 printf("donner le premier entier :");
 scanf("%d",&e);
 L=cree_maillon(e);
 p=L;
while(1)
{printf("tape zero(0) pour arreter autre pour continue: ");
scanf("%d",&choix);
if(choix==0)
break;
printf("donner un autre entier: ");
 scanf("%d",&e);
 p->suiv=cree_maillon(e);
 p=p->suiv ;
 }
return L;
}/*
//Soit une liste de nombres relatifs. Ecrire une fonction permettant de séparer cette liste en deux listes : la première ne comportant que des entiers positifs ou nuls, et la seconde ne comportant que des nombres négatifs.
void separer(liste L ,liste *L1 , liste *L2)
{ liste p=L ;
 while(p)
{ if(p->element>=0)
  ajoutTete(L1,p->element);
  else
 ajoutTete(L2,p->element);
   p=p->suiv;
}
}*/
void separer(liste L,liste *L1,liste *L2)
{ liste P=NULL,N=NULL , T=L;
  while(T)
{ if(T->element>=0)
   { if(P==NULL)
     {P=T;
      *L1=P;
     }
     else
     {P->suiv=T;
      P=P->suiv;
     }
   }
   else
   { if(N==NULL)
     {N=T;
      *L2=N;
     }
     else
     {N->suiv=T;
      N=N->suiv;
     }
   }
   T=T->suiv;
}
if(P)
 P->suiv=NULL;
  if(N)
   N->suiv=NULL;
}
/*void separer(liste L ,liste *L1 , liste *L2)
{ liste p=L ,l1,l2 ;
  *L1=NULL ; *L2=NULL;
 while(p)
  { if(p->element>=0)
  {*L1=p; break;}
  p=p->suiv;
  }
  l1=*L1; p=p->suiv;
 while(p)
 { if(p->element>=0)
    { l1->suiv=p;
      l1=l1->suiv;
    }
 }
 p=L;
 while(p)
  { if(p->element<0)
  {*L2=p; break;}
  p=p->suiv;
  }
  l2=*L2; p=p->suiv;
 while(p)
 { if(p->element<0)
    { l2->suiv=p;
      l2=l2->suiv;
    }
 }
}*/
//exo5 Ecrire un algorithme sur une liste d’entiers simplement chaînée qui échange les positions des nœuds donnés par deux pointeurs g et d
liste echange(liste L, int pos1,int pos2)
{liste g,d,p,q,temp ;int i ;
  p=L ; q=L ; g=NULL ;d=NULL ;
  for(i=1;i<=pos1;i++)
  { g=p;
    p=p->suiv;
  }
  for(i=1;i<=pos2;i++)
  { d=q;
    q=q->suiv;
  }
   if(pos1>1){
  g->suiv=q;
  d->suiv=p;
  temp=p->suiv;
  p->suiv=q->suiv;
  q->suiv=temp;
  return L;}

  if(pos1==1)
  {L=q;
   temp=q->suiv;
    q->suiv=g->suiv;
    d->suiv=g;
    g->suiv=temp;
    return L;
  }

}/*
void echange(liste *L,int pos1,int pos2)
{ p=*L ; q=*L ; g=L ;d=L ;
  for(i=1;i<pos1;i++)
  { g=p;
    p=p->suiv;
  }
  for(i=1;i<pos2;i++)
  { d=q;
    q=q->suiv;
  }


}

void separerList(liste *L ,liste *T ,int x)
{liste p=*L; liste prec=*L;
  while(p->element!=x && p!=NULL)
  {prec=p;
    p=p->suiv;
  }
  *T=p;
  prec->suiv=NULL;
}
void separerlistk(liste l, liste *L ,liste *T ,int k)
{liste p=*L=l; int j=1; liste prec=l;
  if(k>1){
  while(j<k && p!=NULL)
  {prec=p;
    p=p->suiv;
    j++;
  }
  *T=p;
  prec->suiv=NULL;
}
}
void separerM(liste *L,liste *T)
{ liste p=*L;
  int min=p->element;
  while(p)
  {if(min<p->element)
    min=p->element;
    p=p->suiv;
  }
  separerList(&L,&T,min);
}
liste inverse(liste L)
{liste cour=NULL,p=L,m;
  while(p)
  {if(cour==NULL)
    {cour->element=p->element;
    cour->suiv=NULL;
    L=cour;}
    else
     {m->element=p->element;
       m->suiv=L;
       L=m;
    }
    p=p->suiv;
  }
  return L;
}*/
liste inverse(liste L)
{ if(!L)
  return NULL;
  liste prec=NULL,cour=L,succ=NULL;
  while(cour)
  {succ=cour->suiv;
    cour->suiv=prec;
    prec=cour;
    cour=succ;
  }
  L=prec;
  return L;
}
liste inverse_rec(liste L)
{

}
