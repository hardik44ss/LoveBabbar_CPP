#include <stdio.h>

int main(){
    char ch ;
    printf("Enter the character : ");
    scanf("%c",&ch);

    if (ch>='a' && ch<='z'){
        printf("This is a lowercase character.");
    }else {
        printf("This is not a uppper case character .");
    }
    return 0;
}