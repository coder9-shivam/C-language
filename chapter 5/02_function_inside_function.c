#include <stdio.h>
void Morning();
void Afternoon();
void Night();
int main()
{
    Morning();

    return 0;
}

void Morning()
{
    printf("good Morning shivam\n");
    Afternoon();
}

void Afternoon()
{
    printf("good Afternoon shivam\n");
    Night();
}

void Night()
{
    printf("good Night shivam\n");
}
