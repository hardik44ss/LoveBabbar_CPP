#include <stdio.h>

int main(){
    int fact;
    int sum =1;
    printf("Enter the number : ");
    scanf("%d",&fact);
    
    for(int i=1;i<=fact;i++){
        sum = sum*i;
    }
    printf("The factorial of the number %d is %d",fact ,sum);
    
    return 0;
}