#include <stdio.h>

int main()
{
    // //increment 

    // for (int i = 0; i<4; i++)
    // {
    //     printf("the value of i is %d\n", i+1);
    // }



    // Another quick quiz
    // decrementing

    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);

    for (int i = n; i ; i--)     //  i>=0; result --> i is 0 
    {
        printf("the value of n is %d\n", i);
    }
    

    return 0;
}