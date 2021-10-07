#include <stdio.h> 

int main(){ 

    float ThirtyTwo=32, OnePointEight=1.8, FarenheitValue;
    printf("Enter Farenheit value\n");
    scanf("%f", &FarenheitValue);
    printf("In Celsius it will be %f", (FarenheitValue-ThirtyTwo)/OnePointEight);
    return 0; 

}