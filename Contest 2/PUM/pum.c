#include<stdio.h>
int main()
{
    long long int N;
    scanf("%lld",&N);
    for (long long i=1 ; i<=(N * 4) ; i++)
    {
        if (i%4==0)
        {
            printf("PUM\n");
        }
        else
        {
            printf("%lld ",i);
        }
    }


    return 0;
}
