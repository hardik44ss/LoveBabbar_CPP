// Code to generate a random number

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number,guess,numberofguesses=1;
    srand(time(0));
    number = rand() % 100 + 1;

    //printf("The random number is : %d\n", number);
    //Keep running the loop untill we got the correct random number 
        printf("Guess a number between 1 to 100 \n");
    do{
        scanf("%d",&guess);
        // if(guess==number){
        //     printf("Congratulation,you passed the legend level\n");
        // }
        if(guess<number){
            printf("Higher number please!\n");
        }
        else if(guess>number){
            printf("Lower number please!\n");
        }
        else{
            printf("Congratulations ,You guessed it in %d attempts",numberofguesses);
        }
        numberofguesses++;

    }while(guess!=number);
    return 0;
}