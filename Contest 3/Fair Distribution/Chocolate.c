#include<stdio.h>
int main()
{
    int X,Y,res;
    scanf("%d %d",&X,&Y);
    res = Y % X;
    printf("%d",X-res);
    return 0;
}
