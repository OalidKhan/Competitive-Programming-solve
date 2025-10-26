#include<stdio.h>
int main()
{
    char S[100000];
    scanf("%s",&S);
    for(int i=0 ; i<100000 ; i++)
    {
        if(S[i]==',')
        {
            printf(" ");
        }
        else if(S[i]>=65 && S[i]<=90)
        {
            printf("%c",S[i]+32);
        }
        else if(S[i]>=97 && S[i])
        {
            printf("%c",S[i]-32);
        }
        else if(S[i]=='\0')
            break;
    }

    return 0;
}
C++
