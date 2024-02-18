#include<stdio.h>
int main () 
{
    int r,c;
    printf("Enter the row no. : ");
    scanf("%d",&r);
    printf("Enter the column  : ");
    scanf("%d",&c);
    for(int i=0;i<r;i++){
        printf("\n");
        for(int j=0;j<c;j++){
            printf("* ");
        }
    }
    return 0;
}