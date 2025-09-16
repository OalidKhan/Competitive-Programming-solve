#include <stdio.h>
#include <math.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    float result = A / (float)B;

    printf("floor %d / %d = %.0f\n", A, B, floor(result));
    printf("ceil %d / %d = %.0f\n", A, B, ceil(result));
    printf("round %d / %d = %.0f", A, B, round(result));

    return 0;
}
