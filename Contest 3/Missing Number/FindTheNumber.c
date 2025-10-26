#include<stdio.h>
int main()
{
    int n,sum1=0,sum2=0;
    scanf("%d",&n);
    int A[n];
    for(int i=0 ; i<n-1 ; i++)
    {
        scanf("%d",&A[i]);
        sum1+=A[i];
    }
    for(int i=1 ; i<=n ; i++)
    {
        sum2+=i;
    }
    printf("%d",sum2-sum1);

    return 0;
}
