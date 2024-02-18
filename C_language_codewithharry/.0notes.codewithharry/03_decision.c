 #include <stdio.h>
 #include<stdlib.h>
 
int main(){
    printf("\n\n********Decision making in C ************\n");
    int age =9;
    
    // printf("Enter your age :");
    // scanf("%d",&age);
    if(age<18){
        printf("You can't drive any vehicle\n");
        if(age<10){// nested
            printf("YOu nott even ride bicycle\n");
        }
    }
    else if(age>=18 && age <24){
        printf("You can drive but not elgible for heavy liscence\n");
    }
    else{
        printf("You can drive all type of vehicle\n");
    }
// short hand if else

// while Loop in c 
    int number = 0;
    while(number<10){
        printf("%d\n",number);
        number++;// for infinite loop task ko hatta do
        
    }    
// for loop
    for (int i=0;i<20 ; i++){
        printf("Hello world\n");
    }

// do while loop 
    int j=0;
    do {
       printf("hello hardikk\n");
       j++;
    }while(j<10);
return 0;
}
