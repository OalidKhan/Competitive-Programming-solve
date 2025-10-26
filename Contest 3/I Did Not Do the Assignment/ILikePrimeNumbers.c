#include<stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    if(n==1)
    {
        printf("I DID NOT DO THE ASSIGNMENT.");
    }
    else
    {
        for(int i=2 ; i<n ; i++)
        {
            if(n%i==0)
            {
                count++;
                break;
            }
        }
        if(count==0)
        {
            printf("NO PUNISHMENT");
        }
        else
        {
            for(int i=1 ; i<=n ; i++)
            {
                printf("I DID NOT DO THE ASSIGNMENT.\n");
            }
        }
    }

    return 0;
}
