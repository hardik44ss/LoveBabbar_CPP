#include <stdio.h>
#include<stdlib.h>

int main(){
    int a = 4 , b=5 ;
// arithmatic Operators
    printf("\nArithmetic : \n");
    printf("The sum of a and b is %d\n",a+b); //Unary plus
    printf("The subtraction of a and b is %d\n",a-b); //Unary minus
    printf("The multiplication of a and b is %d\n",a*b);    
    printf("The divide of a and b changing datatype is %f\n",(float)a/b);
    printf("The modulo or remainder is %d\n",a%2);
//Increment decrmnet operator
    printf("The increment  is %d\n",++a);\
    printf("The decrement of b is %d\n",--b);
// Relational operator
    printf("\nRelational : \n");
    int true=2 ,false=3;
    printf("%d\n",true == false);
    printf("%d\n",true != false);
    printf("%d\n",true > false);
    printf("%d\n",true < false);
    
// Logical operator
    printf("\nLogical : \n");
    int t = 1 , f = 0;
    printf("%d\n",t || f);
    printf("%d\n",t && f);
    printf("%d\n",!f);
    printf("%d\n",!t);
// Bitwise operator
    printf("\nBitwise : \n");
    // A = 00111100 binary 60
    // B = 00001101 binary 13
    // $ = 00001100 = 12
    // | = 00111101 = 61
    int A=60 ; int B = 13;
    printf("Bitwise 'and' operator returns %d\n", A&B);
    printf("Bitwise 'or' operator returns %d\n", A|B);
    printf("Bitwise 'left operator' 8<<2 returns %d\n", 8<<2);
    printf("Bitwise 'right operator' 16>>2 returns %d\n", 16>>2);
    
// Binary arithmetic
    printf("\nBinary arithmetic: \n");

    // Binary representation of numbers
    int c = 0b1101; // Binary: 1101
    int d = 0b1010; // Binary: 1010

    // XOR operation
    int result = c ^ d; // XOR operator (^)
    printf("c: %d (Binary: %04b)\n", c, c);
    printf("d: %d (Binary: %04b)\n", d, d);
    printf("c ^ d: %d (Binary: %04b)\n", result, result);

    // Ones complement operation
    int one = 0b1101;
    one = ~one;
    printf("The ones complement of %d (Binary: %04b) is %d\n", c, c, one);
    
// Assignment operator
    printf("\n\nAssignment : \n");
    int num=4;
    num +=5;
    printf("num = num + 5 is %d\n",num);
   // now num =9
    num -=4;
    printf("num = num - 4 is %d\n",num);
   // now num = 5
    num *=4;
    printf("num = num * 4 is %d\n",num);
   // num =20
    num /=2;
    printf("num = num / 2 is %d\n",num);

// Misceleneous
    printf("\nMisceleneous : \n");
    int input=4;
    printf("value of %d/3 is %f",input , (float)input/3); // changing data type
    return 0;
}