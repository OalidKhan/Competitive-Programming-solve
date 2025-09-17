#include <stdio.h>

int main()
{
    char S;
    int N,Nnumber;
    scanf(" %c",&S);
    scanf("%d",&N);
    for (int i=1 ; i<=N ; i++)
    {
        scanf("%d",&Nnumber);
        switch (S)
        {
        case '+':
        {
            for (int p=1 ; p<=Nnumber ; p++)
            {
                printf("+");
            }
            printf("\n");
            break;
        }
        case '-':
        {
            for (int s=1 ; s<=Nnumber ; s++)
            {
                printf("-");
            }
            printf("\n");
            break;
        }
        case '*':
        {
            for (int m=1 ; m<=Nnumber ; m++)
            {
                printf("*");
            }
            printf("\n");
            break;
        }
        case '/':
        {
            for (int d=1 ; d<=Nnumber ; d++)
            {
                printf("/");
            }
            printf("\n");
            break;
        }
        }
    }

    return 0;
}
