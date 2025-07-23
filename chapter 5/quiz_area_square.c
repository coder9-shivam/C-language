#include<stdio.h>
#include<math.h>

int main()
{
    int side;
    printf("Enter the value of side\n");
    scanf("%d", &side);
    printf("The value of area is %f", pow(side, 2));
    
    return 0;
}

// /* pow example */
// #include <stdio.h>      /* printf */
// #include <math.h>       /* pow */


// int main ()
// {
//   printf ("7 ^ 3 = %f\n", pow (7.0, 3.0) );
//   printf ("4.73 ^ 12 = %f\n", pow (4.73, 12.0) );
//   printf ("32.01 ^ 1.54 = %f\n", pow (32.01, 1.54) );
//   return 0;
// }

// output;
// 7 ^ 3 = 343.000000
// 4.73 ^ 12 = 125410439.217423
// 32.01 ^ 1.54 = 208.036691
