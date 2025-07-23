#include <stdio.h>

int main()
{
    // // repeat
    int i, sum = 0, n = 8;
    for (i = 1; i <= 10; i++)
    {
        n = 8 * i;
        sum += n;
    }
    printf("%d\n", sum);

    return 0;
}