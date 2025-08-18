#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    for ( int i=1 ; i<=12 ; i++ )
    {
        print("%d * i = %d\n", N, N*i);
    }
    return 0;
}
