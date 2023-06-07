#include <stdio.h>

int main()
{
    double prices[] = {
        3.0,
        1.0,
        2.0,
        3.0,
        9.0,
        10.1
    };

    for (int i = 0; i < sizeof(prices) / sizeof(prices[0]); i++)
    {
        printf("%.2lf \n", prices[i]);
    }
    return 0;
}