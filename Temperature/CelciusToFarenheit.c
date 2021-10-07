#include <stdio.h> 

int main(){ 

    float ThirtyTwo=32, OnePointEight=1.8, CelsiusValue;
    printf("Enter Celsius value\n");
    scanf("%f", &CelsiusValue);
    printf("In farenheit it will be %f", (CelsiusValue*OnePointEight)+ThirtyTwo);
    return 0; 

}