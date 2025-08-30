#include<stdio.h>
int main()
{
int X;
   int count=0;
   scanf("%lld",&X);
   if (X==1)
   {
       count++;
   printf("NO");
   }
   else
   {
   for (int i=2 ; i<X ; i++)
   {
       if (X%i==0)
       {
           count++;
           break;
       }
   }
    if (count==0)
   printf("YES");
   else
   printf("NO");
   }
  
    return 0;
}
