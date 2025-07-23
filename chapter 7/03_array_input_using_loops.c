// Quick quiz 1 >
#include <stdio.h>

int main()
{
    int marks[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value of marks for student %d: ", i + 1); // (i + 1 = 1, 2, 3, 4, 5) || (i = 0, 1, 2, 3, 4)
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("the value of marks for student %d is: %d\n", i + 1, marks[i]);
    }

    return 0;
}