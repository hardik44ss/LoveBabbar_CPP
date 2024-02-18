// #include <stdio.h>
//       //table of a number in the reverse order
// int main()
// {
//     int num;
//     printf("Print the table of ");
//     scanf("%d", &num);

//     for (int i = 10; i >= 1; i--)
//     {
//         printf("12 X %d = %d\n", i, num * i);
//     }
//     return 0;
// }
#include <stdio.h>
// sum of first x natural number 
int main()
{
    int x;
    int sum = 0;
    printf("Enter the number : ");
    scanf("%d", &x);
    for (int i = 0; i <= x; i++)
    {
        sum = sum + i;
        
    }
    printf("Sum from 0 to %d is : %d",x , sum);
    return 0;
}