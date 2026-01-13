#include <stdio.h>
void main()
{
    int c3,cp,ci,si,sp,N,R;
    float mp,mi;
    cs:
    printf("Entrez le nombre que vous voulez\n");
    scanf("%d",&N);
    if(N<=0)
      {
        printf("Erreur 404 \n");
        goto cs;
      }
    cp=0; c3=0; si=0; 
    ci=0; sp=0; 
    while(N!=0)
      {
        R=N%10;
        N=N/10;
        if(R==3)
        c3++;
        if(R%2==0)
          {
            cp++;
            sp+=R;
          }
        else
          {
            ci++;
            si+=R;
          }
      }
    mp=(float)sp/cp;
    mi=(float)si/ci;
    printf("nombre de fois que le chifre 3 a apparait est %d\n",c3);
    printf("moyenne des chiffres pairs est %.2f\n",mp);
    printf("moyenne des chiffres impairs est %.2f\n",mi);
}