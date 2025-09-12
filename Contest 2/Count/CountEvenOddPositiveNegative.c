#include <stdio.h>

int main()
{
long long int num;
int N,i,even=0,odd=0,positive=0,negative=0;
scanf("%d",&N);
for ( i=0 ; i<N ; i++ )
{
scanf("%lld",&num);
if (num%2==0)
even++;
else
odd++;

if (num<0)
negative++;
else if (num>0)
positive++;

}
printf("Even: %d\n",even);
printf("Odd: %d\n",odd);
printf("Positive: %d\n",positive);
printf("Negative: %d",negative);

return 0;
}

