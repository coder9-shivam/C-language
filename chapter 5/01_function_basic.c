#include <stdio.h>

void display(); // function prototype

int main()
{
    int a;
    printf("this is initializing display function\n");
    display(); // ---> function call
    printf("Display function finished its work\n");
    

    return 0;
}
void display()
{
    printf("this is function display\n"); //---> function definition
}