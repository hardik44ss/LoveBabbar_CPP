#include <stdio.h >

int main()
{
    int a, b, c, d;
    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("Enter the second number : ");
    scanf("%d", &b);
    printf("Enter the thid number : ");
    scanf("%d", &c);
    printf("Enter the forth number : ");
    scanf("%d", &d);
    if (a > b && a > c && a > d)
    {
        printf("%d is the greatest number ", a);
    }
    else if (b > d && b > a && b > c)
    {
        printf("%d is the greatest number ", b);
    }
    else if (c > d && c > a && c > b)
    {
        printf("%d is the greatest number ", c);
    }
    else if (d > a && d > c && d > b)
    {
        printf("%d is the greatest number ", d);
    }
    else
    {
        printf("something went wrong");
    }

    return 0;
}