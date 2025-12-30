#include <stdio.h>
void main()
{
    int N,i;
    float som,fact;
    cs:
    printf("Entrez un nombre entier positif : ");
    scanf("%d",&N);
    printf("\n");
    som=1; fact=1;
    if(N<=0)
      {
        printf("on a dit positif \n");
        goto cs;
      }
    for (i=1 ; i<=N ; i++)
      {
        som+=(float)1/(i+1);
        fact*=i;
      }
    printf("la somme est : %.2f \n",som);
    printf("la factorielle est : %.2f \n",fact);
}