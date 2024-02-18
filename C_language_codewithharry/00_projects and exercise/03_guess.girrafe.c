#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secretnumber = 44;
    int guess;
    int guesscount = 0;
    int guesslimit = 3;
    int outofguesses = 0;

    while (guess != secretnumber && outofguesses == 0 )
    {
        if (guesscount < guesslimit)
        {
            printf("Guess a number : ");
            scanf("%d", &guess);
            guesscount++;
        }
        else
        {
            outofguesses = 1;
        }
    }
        if (outofguesses == 1)
        {
            printf("OUt of guesses you lost ");
        }
        else
        {
            printf("You guess it right in %d attempts",guesscount);
        }
    

    return 0;
}