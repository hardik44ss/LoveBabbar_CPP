// i++ --> print and then increment
// ++i --> increment and then print
#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    while (num<=20){
        if(num>=10){
            printf("%d\n",num);
        }
        num++;
    }

    return 0;
}