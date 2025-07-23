#include <stdio.h>

int main()
{
    int i = 1, sum = 0, n = 10;
    while (i <= n)
    {
        sum += i;
        i++;
        printf("The value of sum (1 to 10) is %d", sum);
    }

    // for (int i = 1; i<=n ; i++)     // printf("enter the value of sum\n");  //scanf("%d", &sum);
    // {
    //     sum += i;
    //     printf("the value of sum(1 to 10) is %d\n", sum);
    // }

    return 0;
}