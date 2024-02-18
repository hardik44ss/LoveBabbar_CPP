#include <stdio.h>
/*
 ***
 ***
 ***
 */
int main()
{
    int n;
    printf("Enter number of row : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    { // For ROW
        printf("\n");
        for (int i = 1; i <= 3; i++)
        { // for COLUMN
            printf("*");
        }
    }

    printf("\n\n");

    int row, col;
    printf("Enter the number of row : ");
    scanf("%d", &row);
    printf("Enter the number of column : ");
    scanf("%d", &col);

    for (int a = 1; a <= row; a++)
    {
        printf("\n");
        for (int i = 1; i <= col; i++)
        {
            printf("%d ", a);
        }
    }
    return 0;
}