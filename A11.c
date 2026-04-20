#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, isPrime = 1;
    float sqrt_val;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Square root
    sqrt_val = sqrt(n);
    printf("Square root = %f\n", sqrt_val);

    // Square
    printf("Square = %d\n", n * n);

    // Cube
    printf("Cube = %d\n", n * n * n);

    // Prime check
    if(n <= 1)
        isPrime = 0;
    else
    {
        for(i = 2; i <= n/2; i++)
        {
            if(n % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }

    if(isPrime)
        printf("Number is Prime\n");
    else
        printf("Number is Not Prime\n");

    // Factorial
    long long fact = 1;
    for(i = 1; i <= n; i++)
        fact = fact * i;

    printf("Factorial = %lld\n", fact);

    // Prime factors
    printf("Prime factors: ");
    for(i = 2; i <= n; i++)
    {
        while(n % i == 0)
        {
            printf("%d ", i);
            n = n / i;
        }
    }

    return 0;
}