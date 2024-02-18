#include <stdio.h>

void opr(int n)
{
    if (n == 0)
    {
        return;
    }
    opr(n / 2);
    printf("%d", n % 2);
}
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Please sir, Enter a positive number \n");
    }
    else
    {
        if (n == 0)
        {
            printf("0");
        }
        else
        {
            opr(n);
        }
    }
    printf("\n");
    return 0;
}