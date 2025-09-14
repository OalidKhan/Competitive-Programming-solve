#include <stdio.h>

int main()
{
	long long int A,B,C;
	scanf("%lld %lld %lld",&A,&B,&C);
	if (B>=C && C>=A)
		printf("%lld %lld",A,B);
	else if (C>=A && A>=B)
		printf("%lld %lld",B,C);
	else if(A>=B && B>=C)
		printf("%lld %lld",C,A);
	else if (C>=B && B>=A)
		printf("%lld %lld",A,C);
	else if (B>=A && A>=C)
		printf("%lld %lld",C,B);
	else if (A>=C && C>=B)
    printf("%lld %lld",B,A);

	return 0;
}
