#include <stdio.h>

int main()
{
    // do while loop
    int i = 2, n = 7, prime = 1;
    do
    {
        
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
        i++;
    } while (i < n);

    if (prime == 0 && n != 2)
    {
        printf("This is not a prime number\n");

    }
    else
    {
        printf("This is a prime number\n");
    }
    

    return 0;
}