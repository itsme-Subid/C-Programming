#include <stdio.h> 

int main(){ 

    float CelsiusValue, KelvinValue = 273.15;
    printf("Enter Celsius value\n");
    scanf("%f", &CelsiusValue);
    printf("In Kelvin it will be %f", CelsiusValue+KelvinValue);
    return 0; 

}