#include "listedc.h"
p2Personne creer_maillon(ch15 matr,ch15 nom,ch15 prenom ,int age)
{ p2Personne m=(p2Personne)malloc(sizeof(Personne));
   strcpy(m->matr,matr); strcpy(m->nom,nom); strcpy(m->prenom,prenom);
   m->age=age;
   m->succ=NULL;
   m->prec=NULL;
    return m;
}
listedchaine initlist(listedchaine LL)
{ LL.tete=LL.queue=NULL;
   return LL;
}
listedchaine inserer_tete(listedchaine LL ,ch15 matr,ch15 nom,ch15 prenom,int age)
{ p2Personne m=creer_maillon(matr,nom,prenom,age);
   if(LL.tete==NULL)
    LL.tete=LL.queue=m;
    else{
    m->succ=LL.tete;
    (LL.tete)->prec=m;
    LL.tete=m;
    }
    return LL;
}
listedchaine inserer_queue(listedchaine LL,ch15 matr,ch15 nom,ch15 prenom,int a)
{p2Personne m=creer_maillon(matr,nom,prenom,a);
    if(LL.queue==NULL)
    LL.tete=LL.queue=m;
    else
    {m->prec=LL.queue;
     (LL.queue)->succ=m;
     LL.queue=m;
    }
  return LL;
}
listedchaine inserer_position(listedchaine LL,ch15 matr,ch15 nom,ch15 prenom,int age,int pos)
{ int j=1; p2Personne prec=LL.tete,cour=LL.tete;
   p2Personne m=creer_maillon(matr,nom,prenom,age);
   while(j++ <pos)
   {prec=cour;
    cour=cour->succ;
   }
  m->prec=prec;
  prec->succ=m;
  m->succ=cour;
  return LL;
}
listedchaine supp_position(listedchaine LL, int pos)
{int j=1;
   p2Personne prec=LL.tete,cour=LL.tete;
   while(j++<pos)
   {prec=cour;
    cour=cour->succ;
   }
   p2Personne t=prec->succ=cour->succ;
   t->prec=prec;
   cour->succ=cour->prec=NULL;
   free(cour);
   return LL;
}

listedchaine supp_agees(listedchaine LL)
{int max=(LL.tete)->age;
   p2Personne cour=LL.tete,prec=LL.tete;
   while(cour)
   {if(cour->age>max)
      {prec=cour->prec; max=cour->age;}
      cour=cour->succ;
   }
   cour=prec->succ;
   p2Personne t=prec->succ=cour->succ;
   t->prec=prec;
   cour->succ=cour->prec=NULL;
   return LL;
}
void affiche(listedchaine LL)
{p2Personne p=LL.tete;
     while(p)
     {printf("%s  %s  %s  %d \n\n",p->matr,p->nom,p->prenom,p->age);
       p=p->succ;
     }
}
