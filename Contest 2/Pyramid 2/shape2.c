#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    for (int r=N ; r>=1 ; r--)
    {
        for (int c=1 ; c<=r ; c++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
