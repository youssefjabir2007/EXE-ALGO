#include <stdio.h>
void main()
{
    int M,i,R,S,n;
    cs:
    printf("Entrez le nombres max M\n");
    scanf("%d",&M);
    if(M<=0)
      {
        printf("Erreur 404\n");
        goto cs;
      }
    for (i=1 ; i<=M ; i++)
      { 
        n=i;
        S=0;
        while(n!=0)
          {
            R=n%10;
            n=n/10;
            S+=R;
          }
        if(S%6==0)
        printf("%d est magique\n",i);
      }
}