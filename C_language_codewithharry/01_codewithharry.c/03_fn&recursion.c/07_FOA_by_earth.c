#include <stdio.h>
float attraction(float mass);
int main(){
    float mass;
    printf("Enter the mass of a body : ");
    scanf("%f",&mass);
    
    printf("The force of attraction by earth on %f is %f Newton",mass,attraction(mass));
    return 0;
}

float attraction(float mass){
    float   forcebyearth;
    forcebyearth= mass*9.8;
    return forcebyearth;
}