#include <stdio.h>

int main(){
    int year;
    
    printf("Enter the year : ");
    scanf("%d",&year);

    if(year % 4==0 || year %400==0){
        printf("This is a leap year ");
    }else {
        printf("Not a leap year");
    }
    return 0;
}