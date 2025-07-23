#include<stdio.h>
int swap(int a){
    int c = 34;
    c = a;
    return c;
}

int main()
{
    int x= 4;   
    printf("The address of variable before swap x is %d\n", &x);
    swap(x);
    printf("The address of variable after swap x is %d\n", &x);

    return 0;
}
