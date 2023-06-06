#include <stdio.h>
#include <string.h>

int main()
{
    char string1[] = "Bro";
    char string2[] = "Code";

    int result = strcmp(string1 , string2);

    printf("%d\n", result);

    return 0;
}