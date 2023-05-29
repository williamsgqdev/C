#include <stdio.h>
#include <stdbool.h>

int main()
{
    float temp = 25;
    bool sunny = true;

    //AND LOGICAL OPERATOR
    if (temp >= 0 && temp <= 30 && sunny)
    {
        printf("Weather is good");
    }
    else
    {
        printf("Weather is bad");
    }

    // OR LOGICAL OPERATOR

    return 0;
}