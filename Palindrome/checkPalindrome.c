#include<stdio.h>
int main()
{
    long long int N,n,reminder,result=0;
    scanf("%lld",&N);
    n = N;
    while (n!=0)
    {
        reminder = n % 10;
        result = (result * 10) + reminder;
        n = n / 10;
    }
    printf("%lld\n",result);
    if (N==result)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
