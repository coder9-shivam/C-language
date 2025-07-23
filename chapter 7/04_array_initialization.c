#include <stdio.h>

int main()
{
    int a[] = {3, 43, 543};
    printf("the value of a[0] is %d\n", a[0]);
    printf("the value of a[1] is %d\n", a[1]);
    printf("the value of a[2] is %d\n", a[2]);
    
    float a[] = {32.5, 4.322, 5.43};
    printf("the value of a[0] is %.3f\n", a[0]);
    printf("the value of a[1] is %.3f\n", a[1]);
    printf("the value of a[2] is %.3f\n", a[2]);

    char a[] = {'A', 'B', 'C'};
    printf("the value of a[0] is %c\n", a[0]);
    printf("the value of a[1] is %c\n", a[1]);
    printf("the value of a[2] is %c\n", a[2]);

    return 0;
}