#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    float r,q;

    printf("Saisir a :",a);
    scanf("%d", &a);

    printf("Saisir b :",b);
    scanf("%d", &b);

    q=a/b;  /* La division*/
    r=a%b;  /* Quotient*/

    printf("Le quotient est : %2.f\ Le rest est %2.f",q,r);
}

