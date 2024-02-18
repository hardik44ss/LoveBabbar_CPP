#include <stdio.h>

int main(){
    int i = 44;
    int *j = &i;
    printf("The value of i is %d\n",i);
    printf("The value of i is %d\n",*j);
    printf("The address of i is %u\n",&i);
    printf("The address of i is %u\n",j);
    printf("The address of j is %u\n",&j);
    printf("The value of i is %u\n",*(&j));

    // call by value --> sending the value of argument
    // call by reference--> sending the address of argument
    
    return 0;
}