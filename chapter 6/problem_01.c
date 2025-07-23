#include <stdio.h>

int main()
{
    int a = 2;
    int *p = &a;
    printf("The value of variable a is %d\n", a);
    printf("The value of variable a is %d\n", *p);
    printf("The address of variable a is %u\n", &a);
    printf("The address of variable a is %u\n", p);

    return 0;
}