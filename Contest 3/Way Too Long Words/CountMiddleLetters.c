#include<stdio.h>
#include<string.h>
int main()
{
    int T,count,length;
    scanf("%d",&T);
    for(int i=1 ; i<=T ; i++)
    {
        char S[100];
        scanf("%s",&S);
        count=0;
        length=strlen(S);
        if(length<=10)
        {
            printf("%s\n",S);
        }
        else
        {
            printf("%c",S[0]);
            for(int i=1 ; i<length-1 ; i++)
            {
                count++;
            }
            printf("%d%c\n",count,S[length-1]);
        }

    }

    return 0;
}
