#include<stdio.h>
int main () 
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("sum is %d\n",(n*n+n)/2);
    int sum=0;
    for(int i=0;i<=n;i++){
        sum+=i;
    }
    printf("Sum of first %d natural number is %d",n,sum);
    return 0;
}