#include <stdio.h>
void main()
{
    int N;
    do
      {
        printf("entrez un nombre :");
        scanf("%d",&N);
        printf("\n");
        if (N<10)
            printf("Plus grand  ! \n");
        if (N>20)
            printf("Plus petit  ! \n");
      } while (N>20 || N<10);   
}