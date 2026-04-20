#include <stdio.h>

int main()
{
    int n, remainder;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Reversed number: ");

    while(n != 0)
    {
        remainder = n % 10;
        printf("%d", remainder);
        n = n / 10;
    }

    return 0;
}