#include <stdio.h>
void sumandavg(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = (float)(*sum) / 2;
}
int main()
{
    int i, p, sum;
    float avg;
    i = 2,
    p = 5; 
    sumandavg(i, p, &sum, &avg);
    printf("The value of sum is %d\n", sum);
    printf("The value of avg is %.3f\n", avg);

    return 0;
}