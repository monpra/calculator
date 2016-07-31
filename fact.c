#include<stdio.h>

int main()
{
   int i,n,p=1;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       p=p*i;
   }
   printf("Factorial of %d id %d",n,p);
}
