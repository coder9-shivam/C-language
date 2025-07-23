#include <stdio.h>

int main()
{
    // int i = 34;
    // int *ptr = &i;
    // printf("The value of ptr is %u\n",ptr);
    // // ptr = ptr - 1;
    // // ptr = ptr + 1;
    // // ptr--;
    // ptr++;
    // printf("The value of ptr is %u\n",ptr);    //  {int store in 4 bytes it depends on your computer}


    float f = 3.4;
    float *ptr = &f;
    printf("The value of ptr is %u\n",ptr);
    // ptr = ptr - 1;
    ptr = ptr + 1;
    // ptr--;
    // ptr++;
    printf("The value of ptr is %u\n",ptr);    //  {float store in 4 bytes it depends on your computer}


    // char c = 'A';
    // char *ptr = &c;
    // printf("The value of ptr is %u\n", ptr);
    // // ptr = ptr - 1;
    // // ptr = ptr + 1;
    // // ptr--;
    // ptr++;
    // printf("The value of ptr is %u\n", ptr); //  {char store in 1 bytes it depends on your computer}

    return 0;
}