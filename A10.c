#include <stdio.h>

int main()
{
    int choice, n, i;
    float a, b, result = 1;

    printf("Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Power (x^y)\n");
    printf("6. Factorial (x!)\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            printf("Result = %f", a + b);
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            printf("Result = %f", a - b);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            printf("Result = %f", a * b);
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            if(b != 0)
                printf("Result = %f", a / b);
            else
                printf("Division by zero not allowed");
            break;

        case 5:
            printf("Enter base and power: ");
            scanf("%f %f", &a, &b);

            result = 1;
            for(i = 1; i <= b; i++)
                result = result * a;

            printf("Result = %f", result);
            break;

        case 6:
            printf("Enter a number: ");
            scanf("%d", &n);

            result = 1;
            for(i = 1; i <= n; i++)
                result = result * i;

            printf("Result = %f", result);
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}