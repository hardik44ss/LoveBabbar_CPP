#include <stdio.h>
#include<stdlib.h>
 
struct Books{
    char name[90];
    char author[90];
    int price;
} book;

void printstruct(struct Books bk){
    printf("Book name is %s\n",bk.name);
    printf("Author name is %s\n",bk.author);
    printf("Price is %d\n",bk.price);
}
int main(){
    struct Books bk1;
    strcpy(bk1.name,"C language");
    strcpy(bk1.author, "Hardik Suthar");
    bk1.price =89;

    printstruct(bk1);
    //bk1 value goes into void function
    return 0;
}