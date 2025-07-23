#include <stdio.h>
void sum(int a);
int main()
{
    int i = 3;
    printf("The address of variable i is %u\n", &i);
    sum(i);

    return 0;
}
void sum(int a)
{
    printf("The address of variable a is %u\n", &a);
}