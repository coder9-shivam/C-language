#include<stdio.h>

int main()
{
    // Question : Find the age group who can drive

    int age;
    printf("Enter the age: ");
    scanf("%d", &age);

    if (age <= 17)
    {
        printf("You can not drive!");
    }

    else if (age >= 90)
    {
        printf("You can not drive fast");
    }
    
    else
    {   
        printf("You can drive!");
    }
    
    
    
    return 0;
}