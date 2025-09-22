#include<stdio.h>
int main()
{
    long long int N,first=0,second=1,fibo=0;
    scanf("%lld",&N);
    for(int i=1 ; i<=N ; i++)
    {
        printf("%lld ",first);
        fibo = first + second;
        first = second;
        second = fibo;
    }


    return 0;
}
