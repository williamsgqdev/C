#include <stdio.h>

int main()
{
    const double PI = 3.14159;

    double radius;
    double circumference;
    double area;

    printf("\n Enter radius of your circle ? ");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;
    area = PI * radius + radius;

    printf("\n Your circumference is %lf", circumference);
    printf("\n Your area is %lf", area);

    return 0;
}