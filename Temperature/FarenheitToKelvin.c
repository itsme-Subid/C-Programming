#include <stdio.h> 

int main(){ 

    double ThirtyTwo=32, OnePointEight=1.8, KelvinValue = 273.15, FarenheitValue;
    printf("Enter Farenheit value\n");
    scanf("%lf", &FarenheitValue);
    printf("In Kelvin it will be %lf", (FarenheitValue-ThirtyTwo)/OnePointEight+KelvinValue);
    return 0; 

}