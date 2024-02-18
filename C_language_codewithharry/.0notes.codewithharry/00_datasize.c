#include <stdio.h>
#include<stdlib.h>

int main(){
    int a=4;     // 4 byte
    unsigned short integer = 8;// 2 byte
    long integer1=3; //4 byte
    short integer2=7; // 2 byte 

    float fl=8.7;  // 4 byte - 6 decimal
    double myfloat=8.56; //8 byte - 15 decimal
    long double mydloat = 7.458; // 19 decimal

    char ch='c';   // %c or %s for word - 1 byte
// size of function
    printf("Size taken by int  is %d\n", sizeof(int));
    printf("Size taken by unsigned short is %d\n", sizeof(unsigned short));
    printf("Size taken by long is %d\n", sizeof(long));
    printf("Size taken by short is %d\n", sizeof(short));
    printf("Size taken by float is %d\n", sizeof(float));
    printf("Size taken by double is %d\n", sizeof(double));
    printf("Size taken by long double is %d\n", sizeof(long double));
    printf("Size taken by char is %d\n", sizeof(char));
    return 0;
}
// NOTES
// sizeof == unsigned datatype
// the value is compared only with same datatype*********
// .12 , .1  is stored as double with higher degreee of precision
// untill unless we store it in float datatype
// (i.e.) float f= 0.1;
/* if (f== 0.1){
    printf("True\n");
}else{}
*/
/*int a , 
The do-while loop is set up with the condition while (0), which means the loop will execute once, regardless of the condition. This is because the loop body is executed first before checking the condition.
*/