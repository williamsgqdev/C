#include <stdio.h>

double square(double x)
{
    return x * x;
}
int main()
{
    double number = square(2.0);

    printf("%.1lf", number);
    return 0;
}