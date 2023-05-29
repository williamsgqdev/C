#include <stdio.h>

void birthday(char name[] , int age)
{
    printf("\n Happy Birthday %s" , name);
    printf("\n You are now %d years old" , age);
}
int main()
{
    char name[] = "Williams";
    int age = 90;
    birthday(name , age);


    return 0;
}