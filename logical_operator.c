#include <stdio.h>
#include <stdbool.h>

int main()
{
    float temp = 25;
    bool sunny = true;

    // AND LOGICAL OPERATOR : Both condition needs to be true
    if (temp >= 0 && temp <= 30 && sunny)
    {
        printf("Weather is good");
    }
    else
    {
        printf("Weather is bad");
    }

    // OR LOGICAL OPERATOR : One condition needs to be true
    if (temp <= 0 || temp >= 30 && sunny)
    {
        printf("Weather is good");
    }
    else
    {
        printf("Weather is bad");
    }

    // NOT LOGICAL OPERATOR : not true
    if(!sunny){
        printf("Its cloudy outside");
    }

    return 0;
}