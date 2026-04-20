#include <stdio.h>

int main()
{
    int n, i, j;
    float x, term, sum = 0;

    printf("Enter value of x (in radians): ");
    scanf("%f", &x);

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        int power = 2*i - 1;
        int fact = 1;

        // calculate factorial
        for(j = 1; j <= power; j++)
            fact = fact * j;

        // calculate power of x
        term = 1;
        for(j = 1; j <= power; j++)
            term = term * x;

        term = term / fact;

        if(i % 2 == 0)
            sum = sum - term;
        else
            sum = sum + term;
    }

    printf("Sum of sine series = %f", sum);

    return 0;
}