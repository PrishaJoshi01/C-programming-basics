#include <stdio.h>

int main()
{
    int n,i ;
    printf("Enter a number: \n");
    scanf("%d", &n);
    printf("The Multiplication table of %d is : \n" , n );
    for (i=0;i<11;i++ )
    {
        printf("%d X %d = %d \n " , n , i , n*i);
    }

    return 0;
}