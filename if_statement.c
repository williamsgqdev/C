#include <stdio.h>

int main()
{
    int age;

    printf("\n Enter age: ");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("\n you are now Signed up");
    }
    else if (age < 0)
    {
        printf("Really nigga  , u playing");
    }
    else
    {
        printf("\n you are too young");
    }
    return 0;
}