#include<stdio.h>

int main()
{
    int principle = 100, rate = 4, years = 5;
    int simpleinterest = (principle * rate * years)/100;
    printf("the value of simple interest is %d", simpleinterest);
    return 0;
}