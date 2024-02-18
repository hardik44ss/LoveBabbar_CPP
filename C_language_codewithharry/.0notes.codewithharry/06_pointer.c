#include <stdio.h>
#include<stdlib.h>

int main(){
    // pointer locate the address
    // they can change their address so there value can be change
    int a=44;
    printf("The value of a : %d\n",a);
    int* pointer;
    pointer = &a;// store the adress
    *pointer = 22;// give value to the address
    printf("Value after assighning valye of a to  pointer a : %d\n",a);

    return 0;
}