#include<stdio.h>

int main()
{
    int i = 1, n = 8, factorial = 1;
    while (i<=n)
    {
        factorial *= i;
        i++;
    }
    printf("The value of factorial %d and %d", n , factorial);

    
    return 0;
}