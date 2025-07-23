#include <stdio.h>

int main()
{
    int i = 0;
    do{
        printf("the value of i is %d\n", i);
        if (i==5)
        {
            break;
        }
        i++;
        }
        while (i<10);


    int i = 0;
    while (i < 100)
    {
        printf("the value of i is %d\n", i);
        if (i == 5)
        {
            break;
        }
        i++;
    }


    for (int i = 0; i<10; i++)
    {
        printf("the value of i is %d\n", i);
        if(i==5){
        break;
        }
    }

    return 0;
}