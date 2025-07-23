#include <stdio.h>

int main()
{
    int num1, num2, num3, num4;

    printf("Enter the num1\n");
    scanf("%d", &num1);
    printf("Enter the num2\n");
    scanf("%d", &num2);
    printf("Enter the num3\n");
    scanf("%d", &num3);
    printf("Enter the num4\n");
    scanf("%d", &num4);

    if (num1 > num2 && num1 > num3 && num1 > num4)
    {
        printf("num1 is greater of Them all\n", num1);
    }
    else if (num2 > num3 && num2 > num4)
    {
        printf("num2 is greater of Them all\n", num2);
    }
    else if (num3 > num4)
    {
        printf("num3 is greater of Them all\n", num3);
    }
    else
    {
        printf("num4 is greater of Them all\n", num4);
    }

    return 0;
}