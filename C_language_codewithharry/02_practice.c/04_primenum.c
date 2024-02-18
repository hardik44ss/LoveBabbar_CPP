#include<stdio.h>
int main () 
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    int isprime=0;
    for(int i=2;i<num;i++){
        if(num%i==0){
            //printf("It is a prime number \n     divided by %d\n",i);
            isprime=1;
        }
    }
    if(isprime==1){
    printf("%d is prime \n-",num);
    }
    printf("\n-\n FOR time complexicity we use i< root under n \n-\n");
    for(int i=2;i*i<num;i++){
        if(num%2==0){
            isprime=2;
        }
    }
    if(isprime==2){
        printf("It is a prime number ");
    }
    return 0;
}