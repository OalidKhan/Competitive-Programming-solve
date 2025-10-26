#include<stdio.h>
#include<string.h>
int main()
{
    char S[100];
    fgets(S,100,stdin);
    int length=strlen(S);
    for(int i=0; i<length ; i++)
    {
        if(S[i]==' ')
        {
            continue;
        }
        else
        {
            printf("%c",S[i]);
        }
    }

    return 0;
}
