#include <stdio.h>

int main()
{
    int op;
    float a, b;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("\nMenu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter your choice: ");
    scanf("%d", &op);

    if (op == 1)
    {
        printf("Result = %f", a + b);
    }
    else if (op == 2)
    {
        printf("Result = %f", a - b);
    }
    else if (op == 3)
    {
        printf("Result = %f", a * b);
    }
    else if (op == 4)
    {
        if (b != 0)
            printf("Result = %f", a / b);
        else
            printf("Division by zero not allowed");
    }
    else
    {
        printf("Invalid choice");
    }

    return 0;
}