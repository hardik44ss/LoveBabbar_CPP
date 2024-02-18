#include <stdio.h>
float celcius(float temp);
int main(){
   float temp;
    printf("Enter the Mohit's body temperature in celcius : ");
    scanf("%f",&temp);
 
    printf("The temperature in Fahrnheit of mohit is %f ", celcius(temp));
    return 0;
}

float celcius(float temp){
    float fahr;
    fahr=(9*temp/5 ) + 32;
    return fahr;
}