#include <stdio.h>

int main()
{

     int row;
     printf("Enter the number of row : ");
     scanf("%d",&row);

     for(int i=1;i<=row;i++){
         printf("\n");
         for(int j=0;j<i;j++){
             printf("* ");
         }
     }
    
     printf("\n\n");

     int row2;
     printf("Enter the number of row : ");
     scanf("%d",&row2);

     for(int i=1;i<=row2;i++){
         printf("\n");
         for(int j=1;j<=i;j++){
             printf("%d ",j);
         }
     }

    return 0;

}