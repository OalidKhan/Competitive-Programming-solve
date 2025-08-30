#include<stdio.h>
int main()
{
    long long int N,T,fact;
    scanf("%lld",&T);
    for (int i=1 ; i<=T ; i++)
    {
        scanf("%lld",&N);
        fact = 1;
        for (int f=1 ; f<=N ; f++)
        {
            fact = fact * f;
        }
        printf("%lld\n",fact);
    }

    return 0;
}
