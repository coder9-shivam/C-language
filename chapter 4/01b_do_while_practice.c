#include <stdio.h>

int main()
{
    // harry code
    int i = 0;
    int n;
    printf("enter the value of n\n");
    scanf("%d", &n);

    do
    {
        printf("the number is %d\n", i+1);
        i++;
    } while (i<n);

   
    // my code
    // int i = 0;

    // do
    // {
    //     printf("the value of i is %d\n", ++i);
    //     printf("the value of i is %d\n", ++i);
    //     printf("the value of i is %d\n", ++i);
    //     printf("the value of i is %d\n", ++i);
    // } while (i > 10);

    return 0;
}