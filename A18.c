#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], rev[100];
    int i, length = 0, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str1);

    // 1. Length
    while(str1[length] != '\0')
        length++;

    printf("Length = %d\n", length);

    // 2. Reverse
    for(i = 0; i < length; i++)
        rev[i] = str1[length - i - 1];
    rev[i] = '\0';

    printf("Reversed string = %s\n", rev);

    // 3. Equality check
    printf("Enter another string: ");
    scanf("%s", str2);

    if(strcmp(str1, str2) == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");

    // 4. Palindrome check
    if(strcmp(str1, rev) == 0)
        printf("String is palindrome\n");
    else
        printf("String is not palindrome\n");

    // 5. Substring check
    if(strstr(str1, str2) != NULL)
        printf("Substring found\n");
    else
        printf("Substring not found\n");

    return 0;
}