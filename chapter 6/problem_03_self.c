#include<stdio.h>
int swap(int *a);

int main()
{
    int x= 4;   
    printf("The value of variable before swap x is %d\n", x);
    swap(&x);
    printf("The value of variable after swap x is %d\n", x);

    return 0;
}
int swap(int *a){
    *a = *a * 10;
}