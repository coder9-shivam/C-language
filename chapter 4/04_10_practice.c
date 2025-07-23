#include <stdio.h>

int main()
{
    // prime number = a prime number (or a prime ) is a natural number greater than 1 that is not a factor of
    // two smaller natural number
    // disclaimer : this is not the best method to solve this problem;
    int n = 5, prime = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 0 && n != 2)
    {
        printf("This number is not a prime number\n");
    }
    else
    {
        printf("This is a prime number\n");
    }

    return 0;
}