#include<stdio.h>
int main()
{
    char X;
    scanf("%c",&X);
    if (X>='a' && X<='z')
    {
        printf("%c",X-32);
    }
    else if (X>='A' && X<='Z')
    {
        printf("%c",X+32);
    }

    return 0;
}
