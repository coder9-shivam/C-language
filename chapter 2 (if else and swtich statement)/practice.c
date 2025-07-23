#include <stdio.h>

int main()
{
    // Question 1;
    // int a; b = a; --> invalid
    int v = 3 ^ 3;  // --> valid
    printf("%d\n", v);
    // char dt = '21 Dec 2020';   // --->invalid 
    char dt = '2'; // ---> valid


    // Question 2;  // (In c language most of the compiler treat a decimal as 'double' )
    float d = 3.0/8 - 2;
    printf("%f\n", d);


    // Question 3;
    int number;
    printf("enter the number\n");
    scanf("%d", &number);
    printf("divisibility test returns: %d\n", number % 97);


    //Question 4
    int x = 2, y = 3, z = 3, k = 1;
    int result = 3 * x / y - z + k;

    // steps(evaluation)
    // 3 * x = 6;
    // 6 / y = 2;
    // 2 - z = -1;
    // -1 + 1 = 0;

    printf("%d", result);

    return 0;
}
