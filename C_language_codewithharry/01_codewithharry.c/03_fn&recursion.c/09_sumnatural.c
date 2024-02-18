#include <stdio.h>
int sumnatural(int natural);
int main(){
    int natural;
    printf("Enter the number :");
    scanf("%d",&natural);

    printf("The sum of the first %d natural number is %d ",natural, sumnatural(natural));
    return 0;
}

int sumnatural(int natural){
   if( natural ==0 ){
    return 0;
   }else{
    return natural + sumnatural(natural-1);
   }

}