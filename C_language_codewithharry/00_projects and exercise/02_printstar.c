#include <stdio.h>
void printstar(int a);
int main()
{
    int a = 3;
    printstar(a);
    return 0;
}

void printstar(int a)
{
    if (a == 1)
    {
        printf("**\n");
        return;
    }
    printstar(a - 1);
    for (int i = 0; i < 2 * a; i++)
    {
        printf("*");
    }
    printf("\n");
}