#include <stdio.h> 

int main(){ 

    double ThirtyTwo=32, OnePointEight=1.8;
    double FarenheitValue;
    printf("Enter Farenheit value\n");
    scanf("%lf", &FarenheitValue);
    printf("In Celsius it will be %lf", (FarenheitValue-ThirtyTwo)/OnePointEight);
    return 0; 

}