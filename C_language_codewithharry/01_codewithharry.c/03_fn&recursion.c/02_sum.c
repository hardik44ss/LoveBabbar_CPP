#include <stdio.h>
int sum(int a, int b); // function prototype // a & b is parameter
                       // sum--> void
int main()
{
    int c;
    c = sum(3, 4); //funtion call
    printf("The value of c is %d",c);
    return 0;
}
int sum(int a, int b)
{
    int result;
    result = a + b;
    return result;
}