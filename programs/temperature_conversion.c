#include <stdio.h>
#include <ctype.h>

int main()
{
    char unit;
    float temp;

    printf("Is the temperature in (F) or (C) ? ");
    scanf("%c", &unit);

    unit = toupper(unit);

    if (unit == 'C')
    {
        printf("\n Enter temperature in Celsius : ");
        scanf("%f", &temp);

        temp = (temp * 9 / 5) + 32;

        printf("\n The temperature in Fahrenheit is %.1f", temp);
    }
    else if (unit == 'F')
    {
        printf("\n Enter the temperature in Fahrenheit : ");
        scanf("%f", &temp);

        temp = ((temp - 32) * 5) / 9;

        printf("\n Your temperature in Celcius is %1.f", temp);
    }
    else
    {
        printf("\n Invalid unit type");
    }
    return 0;
}