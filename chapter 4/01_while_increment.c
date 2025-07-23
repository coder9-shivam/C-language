#include <stdio.h>

int main()
{
    int i = 5;
    printf("the value of  i++ is %d\n", ++i);
    i++; // ---> Pehle print  fir increment    (i = i + 1)
    ++i; // ---> pehle incement fir print      ( _ + 1 = i)
    printf("the value of  i++ is %d\n", i);


    i += 10; // --->  increments i by 10
    printf("the value of  i++ is %d\n", i);
    

    int i = 5;
    printf("the value of i-- is %d\n", i--);
    printf("the value of i is %d\n", --i);

    return 0;
}