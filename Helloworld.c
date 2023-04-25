#include <stdio.h>
#include <stdbool.h>
int main()
{
    // This is a comment
    /*Multi
    Line
    Comment
    */

    int age = 80;
    char grade = 'A';
    char name[] = "Williams";
    float gpa = 2.56;
    bool ok = false;

    printf("My name is %s \n", name);
    printf("My age is %d \n", age);
    printf("My grade is %c \n", grade);
    printf("My gpa is %f", gpa);
    printf("%d", ok);

    return 0;
}