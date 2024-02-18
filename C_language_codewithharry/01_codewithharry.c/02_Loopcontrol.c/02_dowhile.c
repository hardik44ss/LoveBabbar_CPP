#include <stdio.h>

int main(){
    int a; 
    printf("Enter the number : ");
    scanf("%d",&a);

    do {
        printf("%d\n",a);
        a++;
    }while(a<10);
    return 0;
}