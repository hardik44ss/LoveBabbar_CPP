#include <stdio.h>
int sum (int a , int b );
int main(){
    int x=3, y=4;
    printf("The value of a and b is %d and %d\n",x , y);
    printf("The sum of a and b is %d",sum(x,y));
    // 3 and 4 are copied to a and b
    return 0;
}

int sum (int a , int b ){
    int c;
    c=a + b;
    a=234;
    b=345;
    return c;
}