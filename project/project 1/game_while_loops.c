#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, nguesses = 1;
    srand(time(0));
    number = rand() % 100 + 1;    // generates a random number between 1 to 100 
    // printf("Your guess number is %d\n", number);    // optional This line shows you the guess number 
    //keep running the loops untill the number is guessed 

    while (number != guess)
    {
        printf("Guess The number between 1 to 100\n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Lower number please!\n");
        }
        else if (guess < number)
        {
            printf("Higher number please!\n");
        }
        else
        {
            printf("You guessed it in %d attempt", nguesses);
        }
        nguesses++;
    }

    return 0;
}