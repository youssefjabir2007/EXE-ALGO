#include <stdio.h>
#define Nmax 100
void main()
{
    int tab[Nmax],i,N,max,min;
    cs:
    printf("Entrez N la taille du tableau \n");
    scanf("%d",&N);
    if(N>Nmax || N<=1)
      {
        printf("Erreur\n");
        goto cs;
      }
     
    for(i=0 ; i<N ; i++)
      {
        printf("Entrez la valeur de la case %d \n",i+1);
        scanf("%d",&tab[i]);
      }
       max=min= tab[0];
        for(i=1 ; i<N ; i++)
      {
        if(max<tab[i])
        max=tab[i];
        if(min>tab[i])
        min=tab[i];
      }
    printf("la plus grande valeur est %d\n",max);
    printf("la plus petite valeur est %d\n",min);
}