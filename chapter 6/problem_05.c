#include<stdio.h>

int main()
{
    int i = 5;
    int *po;
    int **po_po;

    po = &i;
    po_po = &po;

    printf("The value of variable i is %u\n", **po_po);
    
    return 0;
}   