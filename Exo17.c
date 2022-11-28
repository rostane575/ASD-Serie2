#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,N,S=0;
    printf("Entrer la valeur de N\n",N);
    scanf("%d", &N);
    for(i=1;i<N;i++)
    {
        if(N%i == 0)
        {
            S+=i;
        }
    }
    if(S==N)
        printf("Le nombre est parfait",N);
    else
        printf("Le nombre n'est pas parfait");
}
