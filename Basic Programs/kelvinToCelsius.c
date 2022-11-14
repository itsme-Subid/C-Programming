#include <stdio.h> 

int main(){ 

    double KelvinNegative= 273.15, KelvinValue;
    printf("Enter Kelvin Value\n");
    scanf("%lf", &KelvinValue);
    printf("In Celsius it will be %lf", KelvinValue-KelvinNegative);
    return 0; 

}