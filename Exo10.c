#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
    int n,f,i,j;
    float S;
    printf("Donner le nombre n \n");
    scanf("%d",&n);
    S=1;
    printf("\nS_n=1");
    for(i=1;i<=n;i++)
    {
       f=1;
       for(j=1;j<=i;j++)
          f*=j;
          if(i%2==0)

          printf("+");
          printf("%d/%d",pow(-1, i),((2*i+1)*f));
          S+=(pow(-1,i)/((float)(2*i +1)*f ));
    }
     printf("=%f",S);
}

