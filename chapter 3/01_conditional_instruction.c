// c program to check whether a number is even or odd
#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d", &a);

    //(condition to be checked)
    if (a % 2 == 0)
    {
        printf("The number %d is even \n", a);
    }
    else
    {
        printf("The number %d is odd \n", a);
    }
    
    
    return 0;
}