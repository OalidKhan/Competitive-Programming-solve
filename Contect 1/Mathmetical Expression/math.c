#include <stdio.h>

int main()
{
    int A,B,C;
    char S,Q;
    scanf("%d %c %d %c %d",&A,&S,&B,&Q,&C);
    if (S == '+' && A+B!=C)
    {
        C = A + B;
        printf("%d",C);
    }
    else if (A+B==C)
    {
        printf("Yes");
    }
    else if (S == '-' && A-B!=C)
    {
        C = A - B;
        printf("%d",C);
    }
    else if (A-B==C)
    {
        printf("Yes");
    }
    else if (S == '*' && A*B!=C)
    {
        C = A * B;
        printf("%d",C);
    }
    else if (A*B==C)
    {
        printf("Yes");
    }

    return 0;
}
