#include<stdio.h>
int main()
{
    int T;
    long long int N,rem=0;
    scanf("%d",&T);
    for (long long int s=1 ; s<=T ; s++)
    {
        scanf("%lld",&N);
        if (N==0)
        {
           printf("%d",N);
           printf("\n");
        }
        if (N>0)
        {
        while (N!=0)
        {
            rem = N % 10;
            printf("%lld ",rem);
            N = N / 10;
        }
        if (s<T)
            printf("\n");
        }
    }

    return 0;
}
