#include "listedoublechainee.h"
listedoublechainee initliste(listedoublechainee LL)
{ LL.tete=LL.queue=NULL;
 return LL;
}
pPersonne_bis creer_maillon(chaine nom,int a)
{ pPersonne_bis m=(pPersonne_bis)malloc(sizeof(Personne_bis));
    m->age=a; strcpy(m->nom,nom);
    m->suiv=NULL;
    m->prec=NULL;
    return m;
}
listedoublechainee inserer_tete(listedoublechainee LL , chaine nom ,int a)
{ pPersonne_bis m=creer_maillon(nom,a);
    if(LL.tete==NULL)
        LL.tete=LL.queue=m;
    else{
          m->suiv=LL.tete;
        (LL.tete)->prec=m;
    LL.tete=m;
      }
    return LL;
}
listedoublechainee inserer_queue(listedoublechainee LL,chaine nom ,int a)
{ pPersonne_bis m=creer_maillon(nom,a);
   if(LL.queue==NULL)
       LL.queue=LL.tete=m;
    else{
    m->prec=LL.queue;
    (LL.queue)->suiv=m;
    LL.queue=m;
        }
    return LL;
}
listedoublechainee inserer_postion_bis(listedoublechainee LL ,chaine nom ,int a , int pos)
{int j=1;pPersonne_bis p=LL.tete;pPersonne_bis cour=LL.tete;
    pPersonne_bis m=creer_maillon(nom,a);
    while(j++ <pos)
    { cour=p;
      p=p->suiv;
    }
  m->suiv=p;
  p->prec=m;
  m->prec=cour;
  cour->suiv=m;
  return LL;
}
listedoublechainee supp_tete_bis(listedoublechainee LL)
{ pPersonne_bis temp=LL.tete;
  if(LL.tete!=NULL)
  { LL.tete=(LL.tete)->suiv;
    (LL.tete)->prec=NULL;
    temp->suiv=NULL;
    free(temp);
    temp=NULL;
  }
  else if(LL.tete->suiv==NULL)
  {free(LL.tete) ; LL.tete=LL.queue; }

    return LL;
}
listedoublechainee supp_pos_bis(listedoublechainee LL, int pos)
{ int j; pPersonne_bis T,cour=LL.tete,precd=LL.tete;
  for(j=1;j<pos;j++)
  {precd=cour; cour=cour->suiv;}
    /*precd->suiv=cour->suiv;
     T=precd->suiv; //le mien
    T->prec=precd;
    cour->suiv=cour->prec=NULL;
    free(cour);*/
    T=cour->suiv;
    precd->suiv=T;
    T->prec=precd;
    cour->suiv=cour->prec=NULL;
    free(cour);
}
void afficher_bis(listedoublechainee LL)
{ pPersonne_bis m=LL.tete;
  while(m)
  {printf("%d  %s \n",m->age,m->nom);
    m=m->suiv;
  }
  printf("========================\n");
}
