#include <stdio.h>

int main()
{
    printf("\n");
    printf("***Multiplication table of 5***\n");
    for(int i = 1; i <= 10; i++)
    {
        printf("5 X %d = %d \n", i , 5*i);
    }

    return 0;
}