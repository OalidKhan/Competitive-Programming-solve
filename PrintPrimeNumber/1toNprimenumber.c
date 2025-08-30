#include<stdio.h>
int main()
{
    int N,num,count;
    scanf("%d",&N);
    for ( num=2 ; num<=N ; num++ )
    {
            count=0;
            for ( int i=2 ; i<num ; i++ )
            {
                if ( num%i==0 )
                {
                    count++;
                    break;
                }
            }
            if(count==0)
            {
                printf("%d ",num);
            }
    }
    return 0;
}
