#include<stdio.h>

int main()
{
    int a, b;
    printf("Enter the value of a\n");
    scanf("%d", &a);                        // "%d" --> format specifiers ||  "&a" --> 'address of' operator
                                                                                            
    printf("Enter the value of b\n");
    scanf("%d", &b);

    printf("The sum of a and b is %d", a + b);

    
    return 0;
}