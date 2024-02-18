#include <stdio.h>
int main()
{
    int r, c;
    printf("Enter the row no. : ");
    scanf("%d", &r);
    printf("Enter the column  : ");
    scanf("%d", &c);
    for (int i = 1; i <= r; i++)
    {
        printf("\n");
        for (int j = 1; j <= c; j++)
        {
            printf("%d ", j);
        }
    }
    printf("\n\nFOR TRIAANGLE \n");

    for (int i = 1; i <= r; i++)
    {
        printf("\n");
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
    }
    return 0;
}