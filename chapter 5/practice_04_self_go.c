// Hint:
// fib(n) = fib(n - 1) + fib(n - 2)
// fib(1) = 0
// fib (2) = 1

#include <stdio.h>

int fib(int);
int main()
{
    int a, b;
    printf("Enter The Nth Number\n");
    scanf("%d", &a);
    b = fib(a);
    printf("The %dth Number in fibonacci series is %d\n", a, b);

    return 0;
}
int fib(int n)
{
    if (n == 0) // 1st base condition
    {
        return 0;
    }
    else if (n == 1) // 2nd base condition
    {
        return 1;
    }
    else
    {
        return (fib(n - 1) + fib(n - 2));
    }
}
