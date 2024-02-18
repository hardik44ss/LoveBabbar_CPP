#include <stdio.h>

void galtnumber (int a , int b);
void ultenumber (int *a, int*b);

int main () {
    int x=3 , y =4;
    printf("The value of int a and in b is %d and %d", x ,y);
    galtnumber(3,4);
    printf("The value of int a and in b is %d and %d", x ,y);

    return 0;
}

void galtnumber (int a, int b){
    int koibhi;
    koibhi = a;
    a = b;
    b = koibhi;
}