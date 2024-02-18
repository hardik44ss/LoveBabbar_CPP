// celcius into fahrnheight

#include <stdio.h>

int main()
{
    float celcius, far;
    printf("Enter the temp in celcius : ");
    scanf("%f", &celcius);
    far = (celcius * 9 / 5) + 32;
    printf("Temp. in fahernheit is : %f", far);
    // float k = 3.0 / 9;
    // printf("The value of 3.0/9 : %f", k);
    return 0;
}