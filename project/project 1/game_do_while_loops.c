#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, nguesses = 1 ;
    srand(time(0));
    number = rand()%100 + 1; // generates a random number between 1 to 100
    // printf("the number is %d\n", number);      // optional this line show you the guess number
    // keep running the loop until the number is guessed
    do
    {
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &guess);
        if(guess>number){
            printf("Lower number please!\n");
        }
        else if(guess<number)
        {
            printf("Higher number please!\n");
        }
        else{
            printf("You guessed it in %d attempt\n", nguesses);
        }
        nguesses++;
        
    } while(guess!=number);

    return 0;
}