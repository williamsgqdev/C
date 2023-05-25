#include <stdio.h>
#include <math.h>

int main()
{
    int A;
    int B;
    int C;

    printf("\n Enter side A : ");
    scanf("%d", &A);

    printf("\n Enter side B : ");
    scanf("%d", &B);

    C = sqrt(A * A + B * B);

    printf("\n  side C : %d", C);
    return 0;
}