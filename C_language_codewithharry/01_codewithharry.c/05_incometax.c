#include <stdio.h>

int main()
{
    float income, tax = 0;
    printf("Enter the income ");
    scanf("%f", &income);

    if (income >= 250000 && income <= 500000)
    {
        tax = tax + (.05) * (income - 250000);
    }
    if (income == 500000 && income <= 1000000)
    {
        tax = tax + (.20) * (income - 500000);
    }
    if (income > 1000000)
    {
        tax = tax + (.30) * (income - 1000000);
        
    }
    printf("Your tax to be paid is : %f", tax);
    return 0;
}