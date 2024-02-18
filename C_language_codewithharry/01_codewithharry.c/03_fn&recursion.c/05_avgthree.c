#include <stdio.h>
float average (int a , int b , int c);
int main(){
    int a,b,c;
    printf("Enter the value of a : ");
    scanf("%d\n",&a);
    printf("Enter the value of b : ");
    scanf("%d\n",&b);
    printf("Enter the value of c : ");
    scanf("%d\n",&c);
    printf("the average of %d ,%d ,%d is %f",a,b,c,average(a,b,c));   // compiler reads from right to left
    return 0;
}

float average (int a , int b , int c){
    float result ;
    result = (float)(a+b+c)/3;  // result typecast
    return result ;

}