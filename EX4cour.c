#include <stdio.h>
#define Nmax 100
 void main()
{
int tab[Nmax],i,N,j;
cs:
printf("entrez un nombre N la taille du tableau \n");
scanf("%d",&N);
if(N>Nmax || N<=1)
   {
    printf("Erreur \n");
    goto cs;
   }
for(i=0 ; i<N ; i++)
   {
    printf("entrez la valeur de la case %d\n",i+1);
    scanf("%d",&tab[i]);
   }
for(j=N-1 ; j>=0 ; j--)
    printf("\t %d",tab[j]);
}