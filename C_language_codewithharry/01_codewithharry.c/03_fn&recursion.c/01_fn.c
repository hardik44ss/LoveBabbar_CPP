#include <stdio.h>
void gm();  // function prototype
void ga();
void gn();

int main()
{
    printf("Hello mister , \n");
    gm();  //function call
    gn();
    return 0;
}

void gm()    // function defination
{
    printf("Good morning\n");   
    ga();      //function inside function call

}
void ga()
{
    printf("Good afternoon\n");
}
void gn()
{
    printf("Good night\n");
}