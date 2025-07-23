#include<stdio.h>

int main()
{
    int a;
    scanf("%d", &a);      //{ int value is not given then scanf is optional}
    while(a<=10){
        printf("%d\n", a);
        a++;
    }

    // int a = 0;
    // while(a<=10){       // {this type of commands is dirctly execute there is not work of scanf("")}
    //     printf("%d\n", a);
    //     a++;
    // }

    // int a = 11;
    // while(a>10){     //{ these tow lines will lead to an infinity loop}
    //     printf("%d\n", a);
    //     a++;
    // }
    
    return 0;
}