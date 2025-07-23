#include <stdio.h>
void Morning();
void Afternoon();
void Night();
int main()
{
    int a;
    printf("the value of a is a\n");
    Morning();
    Afternoon();
    Night();

    return 0;
}

void Morning()
{
    printf("good morning C\n");
}

void Afternoon()
{
    printf("good afternoon C\n");
}

void Night()
{
    printf("good night C\n");
}