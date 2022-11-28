#include <stdio.h>
#include <stdlib.h>

main()
{
    int n, inverse=0;
    printf("Saisir un nombre:\n",n);
    scanf("%d",&n);
    while(n!=0)
    {
        inverse = (inverse*10) + (n%10);
        n/=10;
    }
    printf("L'inverse est :%d",inverse);
}



 /*main()
{
   int n,a,b,c,d,tmp,i;
   do
   {
       printf("Donner un nombre a 4 0chiffres \n");
       scanf("%d",&n);
   }
   while(n<1000);
    a=n /1000;
    b=n%1000/100;
   c=n%1000%100/10;
   d=n%1000%100%10;
   tmp=a ;
   a=d ;
   d=tmp ;
   tmp=b ;
   b=c ;
   c=tmp ;
   printf("%d%d%d%d",a,b,c,d);

}*/




