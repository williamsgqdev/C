#include <stdio.h>
#include <string.h>

int main()
{
    int age;
    char name[25];

    printf("\nWhat is your name ?");
    // scanf("%s", &name);
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';
    printf("Wow %s", name);

    printf("\nHow old are you");
    scanf("%d", &age);
    printf("\nYou are %d years old", age);

    return 0;
}