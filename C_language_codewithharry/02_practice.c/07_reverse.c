#include<stdio.h>
int main () 
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    do
    {
        printf("%d",n%10);
        n=n/10;
        /* code */
    } while (n!=0);
    
    return 0;
}