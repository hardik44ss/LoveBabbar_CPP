#include<stdio.h>
int main () 
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int m=1;
    for(int i =1;i<=n;i++){
        m=i*m;
    }
    printf("%d",m);
    return 0;
}