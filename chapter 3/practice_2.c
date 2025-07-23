#include <stdio.h>

int main()
{
    int maths, english, hindi;
    float total;
    printf("enter maths marks\n");
    scanf("%d", &maths);

    scanf("%d", &english);
    printf("enter english marks\n");

    printf("enter hindi marks\n");
    scanf("%d", &hindi);

    total = (maths + english + hindi) / 3;
    
    if ((total < 40) || maths < 33 || english < 33 || hindi < 33)
    {
        printf("your total percentage is %f and you fail", total); //(%d, (int)total)
    }
    else
    {
        printf("your total percentage is %f and you pass", total);
    }
    return 0;
}