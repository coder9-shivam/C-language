#include <stdio.h>
int factorial(int x);

int main()
{
    int a = 10;
    printf("The value of factorial %d is %d\n", a, factorial(a));

    return 0;
}

int factorial(int x)
{
    printf("Calling factorial(%d)\n", x);
    if (x == 1 || x == 0)
    {
        return 1;
    }
    // if(0){}  ---> This commend go infinite at some point function kills
    else
    {
        return x * factorial(x - 1);
    }
}