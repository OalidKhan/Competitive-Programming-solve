#include<stdio.h>
int main()
{
    int t,w,h;
    scanf("%d",&t);
    for(int i=1 ; i<=t ; i++)
    {
        scanf("%d %d",&w,&h);
        if(w==h)
        {
            printf("Square\n");
        }
        else
        {
            printf("Rectangle\n");
        }
    }
    return 0;
}
