#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);

    if (num == 1)
    {
        printf("Your number is 1");
    }

    else if (num == 2)
    {
        printf("Your number is 2");
    }

    else if (num == 3)
    {
        printf("Your number is 3");
    }
    
    else if (num == 4)
    {
        printf("Your number is 4");
    }

    else
    {
        printf("Its is not your number\n");
    }

    return 0;
}