#include <stdio.h>

int main()
{
    // Aritmetic operators

    int x = 5;
    int y = 6;

    x++;
    y++;

    int z = x + y;

    int sub = y - x;

    int multiply = y * x;

    int modulos = y % x;

    // Cast divisors to float
    float division = (float)y / (float)x;

    printf("Addition : %d\n", x);
    printf("Subtraction : %d\n", sub);
    printf("Modulus : %d\n", modulos);
    printf("Multiply : %d\n", multiply);
    printf("Division : %.2f", division);

    return 0;
}