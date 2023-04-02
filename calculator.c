#include "header.h"

/**
 * main - tests the calculator
 * calculator - a basic calculator app
 * Return: 0 for success
*/

int a, b, sum = 0;
/*int numbers[10];*/
char op;

int main(void)
{
    int calculator(void);
    calculator();
    return (0);
}

int calculator(void)
{
    printf("Enter the operation you want to perform...\n");
    scanf("%c", &op);
    printf("Enter the 1st number, the 2nd number...\n");
    scanf("%d %d", &a, &b);
    
    switch(op)
    {
        case '+':
        sum = a + b;
        break;

        case '-':
        sum = a - b;
        break;

        case '*':
        sum = a * b;
        break;

        case '/':
        sum = a / b;

        case '^':
        sum = pow(a, b);
        break;

        default:
        printf("Invalid operator!\n");
    }

    printf("calculation %d %c %d = %d\n", a, op, b, sum);
    return (0);
}
