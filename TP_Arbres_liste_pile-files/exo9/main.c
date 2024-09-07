#include "liste.h"
int main()
{ phrase L1=NULL , L2=NULL; int pos; char nomf[255];
L1=saisir_liste();
affiche_liste(L1);
L2=saisir_liste();
pos=anagramme(L1,L2);
if(pos)
printf("les phrases sont anagramme !!");
    else
printf("les phrases ne sont pas anagramme !!");
printf("donner le nom du ficher :");
getchar();
fgets(nomf,254,stdin);
charger(L1,nomf);
 return 0;
}
