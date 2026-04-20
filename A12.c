#include <stdio.h>

int main()
{
    int a, b, i, gcd = 1, scd = -1;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Smallest Common Divisor (other than 1)
    for(i = 2; i <= a && i <= b; i++)
    {
        if(a % i == 0 && b % i == 0)
        {
            scd = i;
            break;
        }
    }

    if(scd == -1)
        printf("No common divisor other than 1\n");
    else
        printf("Smallest Common Divisor = %d\n", scd);

    // GCD
    for(i = 1; i <= a && i <= b; i++)
    {
        if(a % i == 0 && b % i == 0)
            gcd = i;
    }

    printf("GCD = %d\n", gcd);

    return 0;
}