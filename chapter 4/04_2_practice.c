#include<stdio.h>

int main()
{
    printf("\n");
    printf("***Multiplication table of 2***\n");
    for(int i = 10 ; i>0 ; i--)
    {
        printf("2 X %d = %d \n", i , 2*i);
    }
    
    return 0;
}