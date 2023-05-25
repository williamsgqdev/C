#include <stdio.h>

int main()
{
    char grade;
    printf("\n What is your grade ? ");

    scanf("%c", &grade);

    switch (grade)
    {
    case 'A':
        printf("Excellent grade amigos");
        break;
    case 'B':
        printf("You did good comrade ");
        break;
    case 'C':
        printf("You passed , try harder next time");
        break;
    case 'F':
        printf("You failed");
        break;
    default:
        printf("Watin be this one again");
        break;
    }

    return 0;
}