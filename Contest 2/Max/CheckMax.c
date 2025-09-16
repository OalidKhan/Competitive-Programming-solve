#include<stdio.h>
int main()
{
    long long int N,X,max=0;
    scanf("%lld",&N);
    for (int i=1 ; i<=N ; i++)
    {
        scanf("%lld",&X);
        if (X>max)
        {
            max = X;
        }
    }
    printf("%lld",max);

    return 0;
}
