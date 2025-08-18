#include<stdio.h>
int main()
{
    int const X = 1999 ;
    for ( int i=0 ; ; i++ )
    {
        int v;
        scanf("%d",&v);
        if  ( v==X )
        {
            printf("Correct");
            break;
        }
         else
        printf("Wrong\n");
    }
    return 0;
}
