#include <stdio.h>

struct student
{
    char name[50];
    int roll;
    float marks1, marks2, marks3;
    float total, percentage;
};

int main()
{
    struct student s[3];
    int i;

    for(i = 0; i < 3; i++)
    {
        printf("\nEnter details of student %d:\n", i+1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll No: ");
        scanf("%d", &s[i].roll);

        printf("Marks (3 subjects): ");
        scanf("%f %f %f", &s[i].marks1, &s[i].marks2, &s[i].marks3);

        s[i].total = s[i].marks1 + s[i].marks2 + s[i].marks3;
        s[i].percentage = s[i].total / 3;
    }

    printf("\nStudent Results:\n");

    for(i = 0; i < 3; i++)
    {
        printf("\nName: %s", s[i].name);
        printf("\nRoll No: %d", s[i].roll);
        printf("\nTotal Marks: %f", s[i].total);
        printf("\nPercentage: %f\n", s[i].percentage);
    }

    return 0;
}