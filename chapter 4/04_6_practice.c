#include <stdio.h>

int main()
{
    int i = 1, sum = 0, n = 10;

    do
    {
        sum += i;
        i++;
        printf("the value of sum(1 to 10 ) is %d\n", sum);
    } while (i <= n);

    return 0;
}