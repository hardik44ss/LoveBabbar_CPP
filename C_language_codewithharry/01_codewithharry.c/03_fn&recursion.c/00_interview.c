#include <stdio.h>

int main(){
    int a=3;
    printf("%d,%d,%d",a,++a,a++); //compiler reads it from right  to left
    //                <-  -  <-
    return 0;
}