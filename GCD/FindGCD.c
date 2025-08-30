#include<stdio.h>
int main()
{
    int A,B,remainder;
    scanf("%d %d",&A,&B);
    while (B!=0)
    {
        remainder = A % B;
        A = B;
        B = remainder;
    }
    printf("%d",A);

    return 0;
}
