#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int choice;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    printf("\nMenu:\n");
    printf("1. Length\n");
    printf("2. Copy\n");
    printf("3. Concatenate\n");
    printf("4. Compare\n");
    printf("5. Reverse\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Length of str1 = %lu", strlen(str1));
            break;

        case 2:
            strcpy(str2, str1);
            printf("After copy, str2 = %s", str2);
            break;

        case 3:
            strcat(str1, str2);
            printf("After concatenation = %s", str1);
            break;

        case 4:
            if(strcmp(str1, str2) == 0)
                printf("Strings are equal");
            else
                printf("Strings are not equal");
            break;

        case 5:
        {
            strrev(str1);   // may work in some compilers
            printf("Reversed string = %s", str1);
            break;
        }

        default:
            printf("Invalid choice");
    }

    return 0;
}
