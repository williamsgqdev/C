#include <stdio.h>

int main()
{
    const double PI = 3.14159;

    double radius;
    double circumference;

    printf("\n Enter radius of your circle ? ");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;

    printf("\n Your circumference is %lf", circumference);

    return 0;
}