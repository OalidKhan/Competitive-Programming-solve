#include<stdio.h>
int main()
{
    char X;
    scanf("%c",&X);
    if (X>='a' && X<='z')
    {
        printf("ALPHA\n");
        printf("IS SMALL");
    }
    else if (X>='A' && X<='Z')
    {
        printf("ALPHA\n");
        printf("IS CAPITAL");
    }
    else
    {
        printf("IS DIGIT");
    }
    return 0;
}
