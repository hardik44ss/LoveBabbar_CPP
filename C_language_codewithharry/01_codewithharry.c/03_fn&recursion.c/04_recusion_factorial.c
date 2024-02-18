#include <stdio.h>
int factorial(int x); // function prototype

int main()
{
    int x ;
    printf("Enter the number : ");
    scanf("%d",&x);
    printf("The factorial of %d is %d", x, factorial(x));

    return 0;
}

int factorial(int x)
{
    printf("Calling factorial (%d)\n",x);
    if (x == 0 || x ==1)
    {
        return 1;
    }
    else
    {
        int c = x * factorial(x-1);
        return c;
    }
}