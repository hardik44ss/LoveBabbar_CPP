#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//we can use this code to generate random number 

int main()
{
    int number;
    srand(time(0));
    number = rand() % 1000 + 5; // 5 se lejer 100 tak
    printf("The number is %d", number);
    return 0;
}