#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,nbr_div,i;
    printf("Donner le nombre N\n");
    scanf("%d", &N);

    nbr_div=0;
    for(i=1;i<=N;i++)
        {
            if(N%i == 0)
            {
                nbr_div++;
            }
        }
    if(nbr_div == 2)
        printf("%d est un nombre premier", N);
    else
        printf("%d n'est pas un nombre premier", N);
}
