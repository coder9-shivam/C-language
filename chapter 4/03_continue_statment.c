#include<stdio.h>

int main()
{
    int skip=5;
    int i=0;

    while (i<10){
        i++;
        if (i != skip)
            continue;      // ---> output - 5
        
        else
        printf("%d\n", i);
        
    }                     //  ---> not print 0 to 9 
    

    return 0;
}