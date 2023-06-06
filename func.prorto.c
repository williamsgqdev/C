#include <stdio.h>

void hello(char [] , int); //func prototype
int main()
{

    char name[] = "test";
    int age = 100;

    hello(name , age);

    return 0;
}

void hello(char name[], int age)
{

    printf("Hello %s\n", name);
    printf("\nAge %d\n", age);
}