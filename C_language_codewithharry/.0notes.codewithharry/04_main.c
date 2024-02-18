// *****Function in C ********
#include <stdio.h>
#include<stdlib.h>

// Data_type  func_name(parameter_type name){
//return value_of_type_data_type}
int globalvariable = 4;
// for globalvariable it less presidence than local

void printname(char * name1){ // * is must for char
    printf("%s\n",name1);
}
int sum(int num1 , int num2){
    return num1 + num2;
}
float avg(float a, float b){
    return (a+b)/2;
}

int main(){
    printname("Hardik Suthar");
    printf("%d\n",sum(44,44));
    printf("The average of 44 and 4.4 is %f\n",avg(4.4,44)); 
    int globalvariable = 34; // iski jyada presidence hogi
    // local is more presidence
    printf("Glo vari. is %d",globalvariable);

    return 0;
}