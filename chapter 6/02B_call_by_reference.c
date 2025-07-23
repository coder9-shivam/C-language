#include <stdio.h>
void wrong_swap(int a, int b);
void swap(int *a, int *b);

int main()
{
    int x = 3, y = 4;
    printf("The value of x and y before swap is %d and %d\n", x, y);
    // wrong_swap(x, y); // This will not work due to call by value  (This swap is give value)
    swap(&x, &y); // This will work due to call by reference (This swap is give address)
    printf("The value of x and y after swap is %d and %d\n", x, y);

    return 0;
}
void wrong_swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}