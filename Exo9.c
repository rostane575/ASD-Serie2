#include <stdio.h>
#include <stdlib.h>
int main()
{
    int A,B,i;
    printf("Donner le nombre A\n");
    scanf("%d", &A);
    printf("Donner le nombre B\n");
    scanf("%d", &B);
    i=A%B;
    while(i!=0)
    {
        i=B;
        B=abs(A-B);
        A=i ;
        i=A%B;
    }
     printf(" Le PGCD = %d" ,B) ;
}

/*int main()
{
    int A,B,tmp1 = A,tmp2=B;
    printf("Donner le nombre A\n");
    scanf("%d", &A);
    printf("Donner le nombre B\n");
    scanf("%d", &B);
    while (tmp1 != tmp2)
        if(tmp1>tmp2)
            tmp1-=tmp2;
        else
            tmp2-=tmp2;

    printf("Le PGCD de %d et %d est :",a,b,tmp1);
}
*/
