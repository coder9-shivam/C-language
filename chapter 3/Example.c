#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d", &a);

    if (a >= 18)
    {
        printf("%d you can drive\n", a);
    }
    else
    {
        printf("%d you cannot drive\n", a);
    }

    return 0;
}