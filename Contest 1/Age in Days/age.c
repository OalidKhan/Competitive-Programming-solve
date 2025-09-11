#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    printf("%d years\n",N/365);
    printf("%d months\n",(N%365)/30);
    printf("%d days",(N%365)%30);

    return 0;
}
