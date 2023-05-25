#include <stdio.h>

int main()
{
    char operator;
    double num1;
    double num2;
    double result;

    printf("/n Enter an operator (+ - * /) : ");

    scanf("%c", &operator);

    printf("\n Enter number 1 : ");
    scanf("%lf", &num1);

    printf("\n Enter number 2 : ");
    scanf("%lf", &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("\n %lf", result);
        break;
    case '-':
        result = num1 - num2;
        printf("\n %lf", result);
        break;
    case '*':
        result = num1 * num2;
        printf("\n %lf", result);
        break;
    case '/':
        result = num1 / num2;
        printf("\n %lf", result);
        break;
    default:
        printf("Invalid Operator %c", operator);
        break;
    }

    return 0;
}