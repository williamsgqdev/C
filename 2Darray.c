#include <stdio.h>

int main()
{
    // int numbers[2][7] = {{22, 2, 2, 2, 5, 6, 6}, {22, 2, 2, 2, 5, 6, 6}};

    int numbers[2][3];

    numbers[0][0] = 2;
    numbers[0][1] = 3;
    numbers[0][2] = 4;
    numbers[1][0] = 5;
    numbers[1][1] = 5;
    numbers[1][2] = 5;

    for (int i = 0; i < 2; i++)
    {

        for (int j = 0; i < 3; j++)
        {
            printf("%d ", numbers[i][j]);
        }

        printf("\n");
    }
};
