#include<stdio.h>
int main()
{ 
    printf("Enter the year: ");
    scanf("%d" , &y);
    if (y%400==0)
    {
        printf("It is a leap year");
    }
    elseif (y%4==0 and y%100!=0)
    {
        printf ("It is a leap year");
    }
    else 
    {
        printf("It is not a leap year");
    }