#include<stdio.h>
int main () 
{
    int r;
    printf("Enter the row no. : ");
    scanf("%d",&r);

    for(int i=1;i<=r;i++){
        printf("\n");
        for(int j=1;j<=i;j++){
            printf("* ");
        }
    }
    return 0;
}