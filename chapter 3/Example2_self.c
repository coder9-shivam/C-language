#include <stdio.h>

int main()
{
    int grade;
    printf("Enter your grade(0 - 100)\n");
    scanf("%d", &grade);

    if (grade == 100 || grade >= 90)
    {
        printf("Your grade is A");
    }

    else if (grade == 89 || grade >= 80)
    {
        printf("Your grade is B");
    }

    else if (grade == 79 || grade >= 70)
    {
        printf("Your grade is C");
    }

    else
    {
        printf("Your grade is F\n");
    }

    return 0;
}