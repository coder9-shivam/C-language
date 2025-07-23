#include <stdio.h>

int main()
{
    // Question 1
    // int length, breath;
    // printf("Enter the value of length and breath:\n");
    // scanf("%d %d", &length, &breath);
    // printf("the area of rectangle is %d", length*breath);



    // Question 2
    // int radius, height;
    // float pi = 3.14;
    // printf("Enter the radius of circle:");
    // scanf("%d", &radius);
    // printf("the area of this circle is %f\n", pi * radius * radius);

    // printf("Enter the radius and height of cylinder:");
    // scanf("%d %d", &radius, &height);
    // printf("the volumn of this cylinder is %f\n", pi * radius * radius * height);



    // Question 3
    // float fahrenheit, celsius;
    // printf("Enter the the value of celcius: ");
    // scanf("%f", &celsius);
    // fahrenheit = (9.0/5.0 * celsius) + 32;
    // printf("The fahrenheit is: %f\n", fahrenheit);

    // printf("Enter the the value of fahrenheit: ");
    // scanf("%f", &fahrenheit);
    // celsius = 5.0/9.0 * (fahrenheit - 32);
    // printf("The celsius is: %f", celsius);



    // Question 4
    int principle, rate, years, simpleinterest;
    printf("Enter the value of principle, rate and years: \n");
    scanf("%d %d %d", &principle, &rate, &years);

    simpleinterest = (principle * rate * years)/100;
    printf("the simpleinterest is %d", simpleinterest);


    return 0;
}